#include <stdio.h>


void *memcpyf(void *arr,void *arr2,unsigned int length){
  unsigned char *ptr = arr;
  unsigned char *ptr2 = arr2;
  if((NULL == arr) || (NULL == arr2)){
    printf("ERROR\n");
  }
  else{
    while(length--){
      *ptr = *ptr2;
      ptr++;
      ptr2++;
    }
  }
  return arr;
}

