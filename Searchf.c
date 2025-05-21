#include "test1.h"

statusf Get_Index(const unsigned int *arr,unsigned int length,unsigned int S_number,signed int *const ptr){
  statusf RetVal = F_ok;
  register unsigned int counter = 0;
  if((NULL == ptr) || (NULL == arr)){
    RetVal = F_NOK; // ERROR
  }
  else{
    for (counter = 0; counter < length;counter++){
      if(S_number == arr[counter]){
        *ptr = counter;
        break;
      }
      else{

      }
    }
    if(counter == length){
      RetVal = 1;
      *ptr = -1;
      printf("The Element Didn't Found\n");
    }
    else{

    }
  }
  return RetVal;
}

void print_array(unsigned int *ptr,unsigned int lenght){
  unsigned int counter = 0;
  if(NULL == ptr){
      printf("ERROR\n");
  }
  else{
      for (counter = 0; counter < lenght;counter++){
          printf("[%i] --> %i\n", counter, ptr[counter]);
      }
  }
}

void print_array_2D(unsigned int (*ptr)[][LENGTH],unsigned int length1){
  unsigned int counter1 = 0, counter2 = 0;
  if(NULL == ptr){
      printf("ERROR\n");
  }
  else{
      for (counter1 = 0; counter1 < length1;counter1++){
          for (counter2 = 0; counter2 < LENGTH;counter2++){
              printf("[%i] [%i] --> %i\n", counter1, counter2, (*ptr)[counter1][counter2]);
          }
      }
  }
}