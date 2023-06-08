#include <stddef.h>

void divisors(unsigned n, size_t *length, unsigned array[]) {
  size_t count = 0;
  
  for (unsigned i = 2; i < n; i++){
    if (n % i == 0){
      array[count++] = i;
    }
  }
  *length = count;

}