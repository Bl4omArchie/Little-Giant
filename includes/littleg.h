#ifndef LITTLEG_H
#define LITTLEG_H


#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


// s1: Little_Giant alias LG
typedef struct Little_Giant {
    uint64_t number;
    int bit_size;
} Lg;



// --------- f1: Implementation of Little Giant bignum type ---------

// f1.1
int init_littleg(Lg *number);

// f1.2, f1.3, f1.4
// set_littleg_ul: set a unsigned long into a LG number
// set_littleg_lg: set a LG into another LG number
// set_littleg_zero: set a LG number to 0

int set_littleg_ul(Lg *number, uint64_t data);
int set_littleg_lg(Lg *number, Lg data);
int set_littleg_zero(Lg *number);

int clear_littleg(Lg *number);
int free_littleg(Lg *number);


#endif