#include <stddef.h>

int find_odd(size_t length, const int array[length]) {
    int result = 0;
    for (size_t i = 0; i < length; i++) {
        result ^= array[i];
    }
    return result;
}