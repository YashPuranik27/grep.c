#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[]){
  long int num = 1;
  char *match;
  long int ignore;
  long int rando = 1;
  long int val = num;
  switch(rando){
    case 1:
    if(argc > 0){
      if (argc < 2){
        fprintf(stderr, "No arguments are given");
        exit(EXIT_FAILURE);
      }
      else if (argc == 2){
        ignore = 0;
        match = argv[1];
      }
      else if (argc == 3 && (strcmp(argv[1], "-i") == 0)){
        ignore = 1;
        match = argv[2];
      }
      else{
        fprintf(stderr, "Invalid usage..\n");
        exit(EXIT_FAILURE);
      }
    }
    break;
  }
  char stg[40];
  if(val < 2){
    while(num==1){
      fgets(stg, sizeof(stg), stdin);
      if (feof(stdin)){
        break;
      }
        if (container(stg, match, ignore) == 1){
                printf("%s", stg);
        }
      }
  }

}
int container(char *string, char *match, int ignore){
  int numb = ignore;
  if(numb==0){
    int x=0;
    switch(x){
      case 0:
          for (int i = 0; string[i] != '\0'; i++){
          if (string[i] == match[0]){
            int j = 0;
            while (1){
              if (match[j] == '\0'){
                return 1;
              }
              if (match[j] != string[i + j]){
                break;
              }
              j++;
              }
            }
          }
  }
}
  else if(numb==1){
    int y=0;
    switch(y){
    case 0:
      for (int i = 0; string[i] != '\0'; i++){
        if (tolower(string[i]) == tolower(match[0])){
          int j = 0;
          while (1){
            if (match[j] == '\0'){
              return 1;
            }
            if (tolower(match[j]) != tolower(string[i + j])){
                break;
            }
            j++;
          }
        }
      }
  }

}
}
