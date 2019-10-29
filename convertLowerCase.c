#include <stdio.h>
#include <string.h>

#define MAXSIZE 500

int convertLowerCase(char *line){
  int numChars = 0;
  int i = 0;

  for(i = 0; i < MAXSIZE; i++){
    if(*(line + i) > 64 && *(line + i) < 91){
      *(line + i) += 32;
      numChars ++;
    }
  }

  return(numChars);
}
