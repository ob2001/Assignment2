#include <stdio.h>
#include <string.h>

#define MAXSIZE 500

int replacePunc(char *line){
  int numPunc = 0;
  int i = 0;

  for(i = 0; i < MAXSIZE; i++){
    if((*(line + i) > 32 && *(line + i) < 48) || (*(line + i) > 57 && *(line + i) < 65) || (*(line + i) > 90 && *(line + i ) < 97) || (*(line + i) > 122 && *(line + i) < 128)){
      *(line + i) = ' ';
      numPunc++;
    }
  }

  return(numPunc);
}
