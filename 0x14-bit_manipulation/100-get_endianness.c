#include <stdio.h>

int get_endianness(void) {
    unsigned int num = 1;
    char* ptr = (char*)&num;
    
    // If the first byte of num contains 1, it's little endian
    // Otherwise, it's big endian
    return (int)(*ptr);
}

int main() {
    int endianness = get_endianness();
    
    if (endianness == 0) {
        printf("The system is big endian.\n");
    } else {
        printf("The system is little endian.\n");
    }
    
    return 0;
}

