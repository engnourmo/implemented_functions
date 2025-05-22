#include <stdio.h>
#include <string.h>

unsigned int check_password(const unsigned char *src,unsigned char *des){
    unsigned int RetVal = 0;
    unsigned int length = strlen(src);
    if((NULL == src) || (NULL == des)){
        printf("ERROR\n");
    }
    else{
        while(length--){
            if(*src != *des){
                printf("Incorrect Password\n");
                RetVal = 1;
                break;
            }
            else{
                src++;
                des++;
                if(0 == length){
                    printf("Correct Password\n");
                }
            }
        }
    }
    return RetVal;
}