This folder contains the implementations of three different networks as well as their testing dataset (in JSON format), which is already quantized to `uint8_t`. Please make sure to compile the networks with the `-Os`option, which optimizes for size. Other compiler optimization levels do mess with my optimizations.

- qat-mnist-odd
- qat-occupancy
- qat-occupancy2

The qat-occupancy and qat-occupancy2 datasets are much smaller than the mnist one, so I would suggest you to use one of those for development. The network signature is as follows

```
void network(const uint8_t* inp, int8_t* out);
```

Creating buffers for the pointers and transferring data between FPGA and PC is your job. Let me know if you have any questions.