#include "../includes/littleg.h"


// f1.1
int init_littleg(Lg *num) {
    if (num != NULL) 
        return LG_ERR;

    num->byte_size = LG_INIT_ELEMENTS;
    num->lg_num = malloc(*num->lg_num * LG_INIT_ELEMENTS);
    return LG_OK;
}

// f1.2
int set_littleg_ul(Lg *num, uint64_t data) {
    if (num == NULL) 
        return LG_ERR;
    
    free(num);
    num->lg_num[0] = data;
    return LG_OK; 
}   

// f1.3
int set_littleg_lg(Lg *num, Lg data) {
    if (num == NULL) 
        return LG_ERR;

    
    return LG_OK;
}

// f1.4
int set_littleg_zero(Lg *num) {
    if (num == NULL) 
        return LG_ERR;
    
    free(num);
    num->lg_num[0] = 0;
    return LG_OK;
}


int clear_littleg(Lg *num) {
    if (num == NULL) 
        return LG_ERR;

    return LG_OK;
}


int free_littleg(Lg *num) {
    if (num == NULL) 
        return LG_ERR;
        
    return LG_OK;
}