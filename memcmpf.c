#include <stdio.h>


unsigned int memcmpf(void *arr1,void *arr2,unsigned int length){
  unsigned int *ptr = arr1;
  unsigned int *ptr2 = arr2;
  unsigned int retval = 0;
  if((NULL == arr1) || (NULL == arr2)){
    printf("ERROR\n");
  }
  else{
    while(length--){
      if(*ptr != *ptr2){
        retval = 1;
        printf("Not Equal\n");
        break;
      }
      else{
        ptr++;
        ptr2++;
        if(length == 0){
          printf("same arrays\n");
        }
        else{
          
        }
      }
    }
  }
  return retval;
}
