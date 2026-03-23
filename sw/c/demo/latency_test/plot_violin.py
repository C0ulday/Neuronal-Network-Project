import pandas as pd
import matplotlib.pyplot as plt
import numpy as np

networks = ['qat-occupancy', 'qat-occupancy2', 'qat-mnist-odd']

fig, axes = plt.subplots(1, 3, figsize=(15, 5))

for idx, net in enumerate(networks):
    ax = axes[idx]
    data = []
    labels = []
    
    for impl in ['reference', 'hybrid']:
        try:
            df = pd.read_csv(f'results_{net}_{impl}.csv')
            data.append(df['latency_ms'].values)
            labels.append(impl)
            
            # Check outliers position
            latencies = df['latency_ms'].values
            max_idx = np.argmax(latencies)
            min_idx = np.argmin(latencies)
            print(f"{net} {impl}: Max at sample {max_idx} ({latencies[max_idx]:.3f}ms), Min at sample {min_idx} ({latencies[min_idx]:.3f}ms)")
        except Exception as e:
            print(f"Error loading {net} {impl}: {e}")
    
    if len(data) == 2:
        parts = ax.violinplot(data, showmeans=True, showmedians=True)
        ax.set_xticks([1, 2])
        ax.set_xticklabels(labels)
        ax.set_title(net)
        ax.set_ylabel('Latence (ms)')
        
        # Add stats as text
        for i, (d, l) in enumerate(zip(data, labels)):
            stats = f"Min: {np.min(d):.3f}\nAvg: {np.mean(d):.3f}\nMax: {np.max(d):.3f}"
            ax.text(i+1, np.max(d)*1.05, stats, ha='center', fontsize=8)

plt.tight_layout()
plt.savefig('plot_violin_all.png', dpi=150)
plt.close()
print("\nSaved plot_violin_all.png")
