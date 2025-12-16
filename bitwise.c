#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

void print_binary(uint8_t value, const char* label) {
    printf("%s: 0x%02X (Binary: ", label, value);
    for (int i = 7; i >= 0; i--) {
        printf("%d", (value >> i) & 1);
        if (i % 4 == 0 && i > 0) printf(" "); 
    }
    printf(")\n");
}

int main() {
    uint8_t reg = 0x2A; 

    printf("--- Initial State ---\n");
    print_binary(reg, "Initial reg");

  
    printf("\n--- Operation 1: Set bit 4 ---\n");
    reg |= (1 << 4);
    print_binary(reg, "After setting bit 4");

    reg = 0x2A;


    printf("\n--- Operation 2: Clear bit 1 ---\n");
    reg &= (~(1 << 1));
    print_binary(reg, "After clearing bit 1");

    reg = 0x2A;

   
    printf("\n--- Operation 3: Toggle bit 5 ---\n");
    reg ^= (1 << 5);
    print_binary(reg, "After toggling bit 5");

    return 0;
}
