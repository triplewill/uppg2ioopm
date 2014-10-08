#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/*#define START 1
#define STRING 2
*/

char *istring_mk(const char* str){
  if (str == NULL){
    return NULL;
  }
  
  char* istring = malloc(sizeof(int) + strlen(str));
  if (istring == NULL){
    exit(1);
  }
  
  int length;
  length = strlen(str);
  char string_length[length];
  strcpy(istring, string_length);
  strcpy((istring+4), str);
  printf("%s\n", istring);
  return istring;
}

void istring_rm(char *str){
  free(str);
  str = NULL;
}




char *istring_to_string(const char *str){
  int length = *(int *) (str - sizeof(int));
  char *temp = malloc(length);
  strncpy(temp, str, length);
  int tempint;
  tempint = strlen(temp);
  temp[tempint+1] = '\0';
  return temp;
}


int main(){
  istring_mk("Hej!");
}