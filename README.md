# My Neural Network Project at TU Darmstadt  
# About My Report (PDF File)  

This report presents the implementation and evaluation of a RISC‑V‑based system for measuring neural network inference latency on an FPGA. We synthesized the Ibex RISC‑V core onto a Nexys A7‑100T FPGA board and established UART communication between the FPGA and a host PC.  

<img width="331" height="111" alt="diag" src="https://github.com/user-attachments/assets/a069f91d-0483-4457-99c2-942061728a56" />  

I benchmarked three quantized neural networks (qat‑occupancy, qat‑occupancy2, and qat‑mnist‑odd), each with two implementations (reference and hybrid), measuring round‑trip latency for 50 samples per configuration. The results show that both implementations achieve similar performance, with inference times ranging from 0.16 ms for the small occupancy networks to 13.4 ms for the larger MNIST classifier. The reference implementation is recommended, as it provides equivalent performance with simpler code.  

![a7eb7e8d0d177830a8291508dbf830744d609825](https://github.com/user-attachments/assets/2fbffc97-06cd-4ef1-8f5b-0cac826d9464)  

The project was initially cloned with:  

```bash
git clone github.com/lowRISC/ibex-demo-system
```

For testing:  

```bash
# qat-occupancy2 reference
cd ~/ibex-demo-system/sw/c/build
cmake .. -DNETWORK=2 -DIMPL=0 && make latency_test
cd ~/ibex-demo-system
./util/load_demo_system.sh run ./sw/c/build/demo/latency_test/latency_test ./util/nexysa7-openocd-cfg.tcl
cd ~/ibex-demo-system/sw/c/demo/latency_test
python3 benchmark_v2.py qat-occupancy2 reference

# qat-occupancy2 hybrid
cd ~/ibex-demo-system/sw/c/build
cmake .. -DNETWORK=2 -DIMPL=1 && make latency_test
cd ~/ibex-demo-system
./util/load_demo_system.sh run ./sw/c/build/demo/latency_test/latency_test ./util/nexysa7-openocd-cfg.tcl
cd ~/ibex-demo-system/sw/c/demo/latency_test
python3 benchmark_v2.py qat-occupancy2 hybrid

# qat-mnist-odd reference
cd ~/ibex-demo-system/sw/c/build
cmake .. -DNETWORK=3 -DIMPL=0 && make latency_test
cd ~/ibex-demo-system
./util/load_demo_system.sh run ./sw/c/build/demo/latency_test/latency_test ./util/nexysa7-openocd-cfg.tcl
cd ~/ibex-demo-system/sw/c/demo/latency_test
python3 benchmark_v2.py qat-mnist-odd reference

# qat-mnist-odd hybrid
cd ~/ibex-demo-system/sw/c/build
cmake .. -DNETWORK=3 -DIMPL=1 && make latency_test
cd ~/ibex-demo-system
./util/load_demo_system.sh run ./sw/c/build/demo/latency_test/latency_test ./util/nexysa7-openocd-cfg.tcl
cd ~/ibex-demo-system/sw/c/demo/latency_test
python3 benchmark_v2.py qat-mnist-odd hybrid

# Violin plot
cd ~/ibex-demo-system/sw/c/demo/latency_test
python3 plot_violin.py
```
