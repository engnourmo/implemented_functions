#ifndef _TEST1_H
#define _TEST1_H


#include <stdio.h>
#include <string.h>

#define LENGTH 3

typedef enum{
    F_ok,
    F_NOK
} statusf;

statusf Get_Index(const unsigned int *arr, unsigned int length, unsigned int S_number, signed int *const ptr);
void print_array(unsigned int *ptr, unsigned int lenght);
void print_array_2D(unsigned int (*ptr)[][LENGTH], unsigned int length1);


#endif