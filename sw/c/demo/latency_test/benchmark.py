import serial
import time
import json
import sys

# Config par réseau
NETWORKS = {
    'qat-occupancy':  {'input_size': 22,  'output_size': 2, 'dataset': 'qat-occupancy/dataset.json'},
    'qat-occupancy2': {'input_size': 16,  'output_size': 2, 'dataset': 'qat-occupancy2/dataset.json'},
    'qat-mnist-odd':  {'input_size': 780, 'output_size': 2, 'dataset': 'qat-mnist-odd/dataset.json'},
}

NUM_SAMPLES = 50

def run_benchmark(network_name, impl_name):
    cfg = NETWORKS[network_name]
    
    ser = serial.Serial('/dev/ttyUSB1', 115200, timeout=5)
    ser.reset_input_buffer()
    time.sleep(0.5)
    
    with open(cfg['dataset']) as f:
        data = json.load(f)
    
    latencies = []
    for i in range(min(NUM_SAMPLES, len(data))):
        sample = bytes(data[i]['inp'])
        
        start = time.perf_counter()
        ser.write(sample)
        result = ser.read(cfg['output_size'])
        end = time.perf_counter()
        
        latencies.append((end - start) * 1000)
        time.sleep(0.05)
    
    ser.close()
    
    # Résultats
    print(f"\n=== {network_name} - {impl_name} ===")
    print(f"Min: {min(latencies):.3f} ms")
    print(f"Max: {max(latencies):.3f} ms")
    print(f"Avg: {sum(latencies)/len(latencies):.3f} ms")
    
    # Sauvegarder
    filename = f"results_{network_name}_{impl_name}.csv"
    with open(filename, 'w') as f:
        f.write("sample,latency_ms\n")
        for i, lat in enumerate(latencies):
            f.write(f"{i},{lat:.3f}\n")
    print(f"Saved to {filename}")

if __name__ == "__main__":
    if len(sys.argv) != 3:
        print("Usage: python3 benchmark.py <network> <impl>")
        print("  network: qat-occupancy, qat-occupancy2, qat-mnist-odd")
        print("  impl: hybrid, reference")
        sys.exit(1)
    
    run_benchmark(sys.argv[1], sys.argv[2])
