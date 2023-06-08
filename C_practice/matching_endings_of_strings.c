#include <stdbool.h>
#include <string.h>

bool solution(const char *string, const char *ending)
{
  size_t string_length = strlen(string);
  size_t ending_length = strlen(ending);
  
  if (ending_length > string_length){
    return false;
  }
  
  const char *string_end = string + string_length - ending_length;
  
  return strcmp(string_end, ending) == 0;
    
}