#include <stdio.h>
#include <string.h>

#define MAXSIZE 500

int replaceDigits(char *line){
  int numDigits = 0;
  int i = 0;

  for(i = 0; i < MAXSIZE; i++){
    if(*(line + i) > 47 && *(line + i) < 58){
      *(line + i) = ' ';
      numDigits++;
    }
  }

  return(numDigits);
}
