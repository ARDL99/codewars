#include <stddef.h>
#include <ctype.h>

size_t get_count(const char *s)
{
  size_t count = 0;
  const char *vowels = "aeiou";
  
  while (*s != '\0'){
    char lowercase_char = tolower(*s);
    if (strchr(vowels, lowercase_char) != NULL){
      count++;
    }
    s++;
  }
  return count;
}