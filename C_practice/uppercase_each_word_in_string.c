#include <ctype.h>
#include <string.h>

char *to_jaden_case (char *jaden_case, const char *string)
{
  size_t string_length = strlen(string);
  //copy the string to jaden_case and capitalize each word
  size_t i, j;
  for (i = 0, j = 0; i < string_length; i++, j++){
    if (i == 0 || isspace(string[i - 1])){
      jaden_case[j] = toupper(string[i]); //Capitalize the first character of each word
    } else{
      jaden_case[j] = string[i]; //Copy the remaining characters as is
    }
  }
  jaden_case[j] = '\0'; //Add the null-terminating character
  
  return jaden_case;

}