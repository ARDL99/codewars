#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *solution(int n) {
  char *roman_numerals[13] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
  int values[13] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
  char *result = (char *)malloc(sizeof(char) * 20);  //Allocate memory for the result string
  result[0] = '\0';  //Ensure the string is empty initially
  
  int i;
  for (i = 0; i < 13; i++){
    while(n >= values[i]){
      strcat(result, roman_numerals[i]);  //Append the roman numeral to the result string
      n -= values[i];
    }
  }
  return result;

}