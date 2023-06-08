#include <sys/types.h>
#include <string.h>

ssize_t find_short(const char *s)
{
  //initialize with -1
  ssize_t shortest_length = -1;
  //word delimiters
  const char *delimiters = " \t\n";
  //create a copy of input string
  char *str_copy = strdup(s);
  //Error handling for memory allocation failure
  if (str_copy == NULL){
    return -1;
  }
  char *word = strtok(str_copy, delimiters);
  while (word != NULL){
    ssize_t current_length = strlen(word);
    if (shortest_length == -1 || current_length < shortest_length){
      shortest_length = current_length;
      
    }
    word = strtok(NULL, delimiters);
  }
  //free the allocated memory
  free(str_copy);
  
  return shortest_length;
}