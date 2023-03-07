#include <stdio.h>

void my_c_function(void* arg1) {
    unsigned char* bytes = (unsigned char*) arg1;
    int num_bytes = bytes[0];
    printf("Received byte sequence with length %d: ", num_bytes);
    for (int i = 0; i < num_bytes; i++) {
        printf("%02x ", bytes[i+1]);
    }
    printf("\n");
}