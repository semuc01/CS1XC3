#include <stdio.h>
#include <limits.h>
int main() {
    printf("Size of int: %d bits\n", 8 * sizeof(int));
    printf("Signed int range: %d to %d\n", INT_MIN, INT_MAX);
    printf("Unsigned int range: %u to %u\n", 0, UINT_MAX);
    printf("\n");
    
    printf("Size of short: %d bits\n", 8 * sizeof(short));
    printf("Signed short range: %d to %d\n", SHRT_MIN, SHRT_MAX);
    printf("Unsigned short range: %u to %u\n", 0, USHRT_MAX);
    printf("\n");
    printf("Size of long: %d bits\n", 8 * sizeof(long));
    printf("Signed long range: %ld to %ld\n", LONG_MIN, LONG_MAX);
    printf("Unsigned long range: %lu to %lu\n", 0, ULONG_MAX);
    printf("\n");
    
    printf("Size of long long: %d bits\n", 8 * sizeof(long long));
    printf("Signed long long range: %lld to %lld\n", LLONG_MIN, LLONG_MAX);
    printf("Unsigned long long range: %llu to %llu\n", 0, ULLONG_MAX);
    
    return 0;
}
