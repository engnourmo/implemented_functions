#include <stdio.h>


void *memsetf(void *arr,unsigned char format,unsigned int length){
  unsigned char *ptr = arr;
  if(NULL == arr){
    printf("ERROR\n");
  }
  else{
    while(length--){
      *ptr = format;
      ptr++;
    }
  }
  return arr;
}
