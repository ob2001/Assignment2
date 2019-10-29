#include <stdio.h>
#include <strings.h>

#define MAXSIZE  500

int chop (char *line){
  int i = 0;

  for(i = 0; i < MAXSIZE; i++){
    if(*(line + i) == '\n'){
      *(line + i) = ' ';
      return(0);
    }
  }

  return(-1);

}

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

int replacePunc(char *line){
  int numPunc = 0;
  int i = 0;

  for(i = 0; i < MAXSIZE; i++){
    if((*(line + i) > 32 && *(line + i) < 48) || (*(line + i) > 57 && *(line + i) < 65) || (*(line + i) > 90 && *(line + i ) < 97) || *(line + i) > 122){
      *(line + i) = ' ';
      numPunc++;
    }
  }

  return(numPunc);
}

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

int main ( int argc, char *argv[] ) {
   char line[MAXSIZE];

   while ( fgets ( line, MAXSIZE, stdin ) != NULL ) {
     chop(line);
     /*convertLowerCase(line);
     replaceDigits(line);
     replacePunc(line);
     reduceSpace(line);
     trim(line);*/
     printf ( "%s", line );
   }

   printf("\n");

   return ( 0 );
}
