#include <stdio.h>

unsigned int strncmpf(const char *str1, const char *str2, size_t n){
  if((NULL == str1) || (NULL == str2)){
    printf("ERROR\n");
  }
  else{
    while(n--){
      if(*str1 != *str2){
        printf("The two strings aren't the same\n");
        break;
      }
      else{
        str1++;
        str2++;
      }
      if(0 == n){
        printf("The two strings are the same\n");
      }
      else{

      }
    }
  }
}