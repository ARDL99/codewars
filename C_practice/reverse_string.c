#include <stdio.h>
#include <string.h>

char* strrev(char* str) {
    size_t length = strlen(str);
    char* reversed = str;
    char temp;

    if (length <= 1) {
        return reversed;
    }

    for (size_t i = 0, j = length - 1; i < j; i++, j--) {
        temp = reversed[i];
        reversed[i] = reversed[j];
        reversed[j] = temp;
    }

    return reversed;
}

