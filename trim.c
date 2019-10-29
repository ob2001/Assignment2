#include <stdio.h>
#include <string.h>

#define MAXSIZE 500

int trim(char *line){
  int i = 0;
  int j = 0;

  if(*line < 33){
    i = 0;
    while(*(line + i) < 33){
      i++;
    }
    while(*(line + j - 1) != '\0'){
      *(line + j) = *(line + i + j);
      j++;
    }
    *(line + i + j) = '\0';
  }

  i = 0;
  j = 0;
  while(*(line + i) != 0){
    i++;
  }

  while(*(line + i - j) < 33){
    *(line + i - j + 1) = '\0';
    j++;
  }

  return (0);
}
