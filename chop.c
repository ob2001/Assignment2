#include <stdio.h>
#include <string.h>

#define MAXSIZE 500

int chop (char *line){
  int i = 0;

  for(i = 0; i < MAXSIZE; i++){
    if(*(line + i) == '\n'){
      *(line + i) = ' ';
      break;
    }
  }

  return(0);
}
