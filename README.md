# My neuronal network project at TU-Darmstadt
# About my report (pdf file)

This report presents the implementation and evaluation of a RISC-V-based system for measuring neural network inference latency on FPGA. We synthesized the Ibex RISC-V core onto a Nexys A7-100T FPGA board and established UART communication between the FPGA and a host PC. We benchmarked three quantized neural networks (qat-occupancy, qat-occupancy2, and qat-mnist-odd), each with two implementations (reference and hybrid), measuring round-trip latency for 50 samples per configuration. Our results show that both implementations achieve similar performance, with inference times ranging from 0.16ms for small occupancy networks to 13.4ms for the larger MNIST classifier. The reference implementation is recommended as it provides equivalent performance with simpler code.



`ibex-demo-system/
  build/                    # FPGA bitstream output
  sw/c/
    build/                  # Compiled firmware
    demo/latency_test/
      main.c                # Firmware (custom)
      CMakeLists.txt        # Build config (custom)
      benchmark.py          # Host script (custom)
      plot_violin.py        # Plotting (custom)
      qat-occupancy/        # Network 1 (provided)
        network.c, network.h
        hybrid-simple.c
        ref-from-hybrid-simple.c
        dataset.json
      qat-occupancy2/       # Network 2 (provided)
      qat-mnist-odd/        # Network 3 (provided)
  util/
    load_demo_system.sh
    nexysa7-openocd-cfg.tcl`
