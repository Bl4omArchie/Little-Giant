#ifndef LITTLEG_H
#define LITTLEG_H


#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


// --------- {s} Structures ---------

// s1: Little_Giant alias LG
typedef struct Little_Giant {
    uint64_t *lg_num;
    size_t byte_size;
} Lg;


// --------- {c} Constants ---------

// c1.1, c1.2: output constants
#define LG_OK 1
#define LG_ERR -1


// c2: number of elements. 
// Each elements is a 64 bits number so if you want a 1024 number you need an array of 16 numbers (1024/64 = 16)
#define LG_INIT_ELEMENTS 16



// ---------  {f} Implementation  ---------

// ********* f1 Implementation of Little Giant bignum type *********

// f1.1
int init_littleg(Lg *num);

// f1.2, f1.3, f1.4
// set_littleg_ul: set a unsigned long into a LG number
// set_littleg_lg: set a LG into another LG number
// set_littleg_zero: set a LG number to 0

int set_littleg_ul(Lg *num, uint64_t data);
int set_littleg_lg(Lg *num, Lg data);
int set_littleg_zero(Lg *num);

int clear_littleg(Lg *num);
int free_littleg(Lg *num);

// *****************************************************************



#endif