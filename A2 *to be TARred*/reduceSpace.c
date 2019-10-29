#include <stdio.h>
#include <string.h>

#define MAXSIZE 500

int reduceSpace(char *line){
  int whiteSpace = 0;
  int i = 0;
  int j = 0;
  int k = 0;

  for(i = 0; i < MAXSIZE; i++){
    j = 0;
    if(*(line + i) < 33 && *(line + i) != '\0'){
      while(*(line + i + j + 1) < 33 && *(line + i + j + 1) != '\0'){
        whiteSpace++;
        j++;
      }
      if(j != 0){
        k = 0;
        while(*(line + i + j + k) != '\0'){
          *(line + i + k) = *(line + i + j + k);
          k++;
        }
        *(line + i + k) = '\0';
      }
    }
  }

  return(whiteSpace);
}
