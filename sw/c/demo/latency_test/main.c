#include <stdint.h>
#include "demo_system.h"
#include "timer.h"

// ============================================
// DÉFINI VIA CMAKE : -DNETWORK=1 -DIMPL=0
// NETWORK: 1=qat-occupancy, 2=qat-occupancy2, 3=qat-mnist-odd
// IMPL: 0=reference, 1=hybrid
// ============================================

#if NETWORK == 1
    #include "qat-occupancy/network.h"
#elif NETWORK == 2
    #include "qat-occupancy2/network.h"
#elif NETWORK == 3
    #include "qat-mnist-odd/network.h"
#else
    #error "Define NETWORK: 1, 2, or 3"
#endif

static inline uint32_t get_cycles(void) {
    uint32_t cycles;
    asm volatile("csrr %0, mcycle" : "=r"(cycles));
    return cycles;
}

int main(void) {
    uint8_t input_buffer[INPUT_SIZE];
    int8_t output_buffer[OUTPUT_SIZE];
    
    timer_init();
    timer_enable(5000000);
    
    puts("Ready\n");
    
    while (1) {
        for (int i = 0; i < INPUT_SIZE; i++) {
            int c;
            while ((c = uart_in(DEFAULT_UART)) == -1);
            input_buffer[i] = (uint8_t)c;
        }
        
        uint32_t start = get_cycles();
        
        #if IMPL == 1
            network_hybrid(input_buffer, output_buffer);
        #else
            network(input_buffer, output_buffer);
        #endif
        
        uint32_t end = get_cycles();
        
        for (int i = 0; i < OUTPUT_SIZE; i++) {
            uart_out(DEFAULT_UART, output_buffer[i]);
        }
        
        puts("Cycles: ");
        puthex(end - start);
        putchar('\n');
    }
    return 0;
}
