#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
  int i = 0;
  char *line;

  int counts[100];

  for(i = 0; i < 100; i++){
    counts[i] = 0;
  }

  char words[500][50];
  i = 0;
  for(i = 0; i < 500; i++){
    words[i][0] = '\0';
  }

  i = 0;
  while(fgets(line, 500, stdin) != NULL){
    if(strcmp(words[i], line) != 0){
      i++;
      strcpy(words[i], line);
    }
    counts[i] += 1;
  }

  i = 1;
  while(counts[i] != 0){
    printf("%03d %s", counts[i], words[i]);
    i++;
  }

  return (0);
}
