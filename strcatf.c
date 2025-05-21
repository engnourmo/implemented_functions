#include <stdio.h>
#include <string.h>

char *strcatf(char *dest_str, const char *src_str){
  char *ptr = dest_str;
  char *ptr2 = src_str;
  unsigned int length = strlen(src_str);
  if((NULL == dest_str) || (NULL == src_str)){
    printf("ERROR\n");
  }
  else{
    while(length--){
      *ptr = *ptr2;
      ptr++;
      ptr2++;
    }
    *ptr++ = *ptr2++; //for null termination
  }
  return dest_str;
}