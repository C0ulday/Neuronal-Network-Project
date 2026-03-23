import serial
import time
import json

ser = serial.Serial('/dev/ttyUSB1', 115200)
OUTPUT_SIZE = 2
# Charger un sample du dataset JSON
with open('qat-mnist-odd/dataset.json') as f:
    data = json.load(f)
sample = bytes(data[0]['inp'])

# Mesure
start = time.perf_counter()
ser.write(sample)
result = ser.read(OUTPUT_SIZE)
end = time.perf_counter()

print(f"Latence: {(end - start) * 1000:.3f} ms")
