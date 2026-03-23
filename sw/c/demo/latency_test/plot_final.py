import pandas as pd
import matplotlib.pyplot as plt
import numpy as np

networks = ['qat-occupancy', 'qat-occupancy2', 'qat-mnist-odd']
impls = ['reference', 'hybrid']

for net in networks:
    for impl in impls:
        try:
            df = pd.read_csv(f'results_{net}_{impl}.csv')
            latencies = df['latency_ms']
            
            # Stats
            min_val = latencies.min()
            max_val = latencies.max()
            avg_val = latencies.mean()
            
            # Plot
            fig, ax = plt.subplots(figsize=(8, 5))
            ax.hist(latencies, bins=20, edgecolor='black', alpha=0.7)
            
            ax.axvline(avg_val, color='red', linestyle='--', label=f'Avg: {avg_val:.3f} ms')
            ax.axvline(min_val, color='green', linestyle=':', label=f'Min: {min_val:.3f} ms')
            ax.axvline(max_val, color='orange', linestyle=':', label=f'Max: {max_val:.3f} ms')
            
            ax.set_xlabel('Latence (ms)')
            ax.set_ylabel('Fréquence')
            ax.set_title(f'{net} - {impl}')
            ax.legend()
            
            filename = f'plot_{net}_{impl}.png'
            plt.savefig(filename)
            plt.close()
            print(f"Saved {filename}")
            print(f"  Min: {min_val:.3f} ms | Max: {max_val:.3f} ms | Avg: {avg_val:.3f} ms\n")
            
        except Exception as e:
            print(f"Error {net} {impl}: {e}")
