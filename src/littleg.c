#include "../includes/littleg.h"


// f1.1
int init_littleg(Lg *lg_num) {
    if (lg_num == NULL) 
        return LG_ERR;

    lg_num->byte_size = LG_INIT_BYTE_SIZE;
    lg_num->number = malloc(*lg_num->number * LG_INIT_BYTE_SIZE);
    return LG_OK;
}

// f1.2
int set_littleg_ul(Lg *lg_num, uint64_t data) {
    if (lg_num == NULL) 
        return LG_ERR;
    
    return LG_OK; 
}

// f1.3
int set_littleg_lg(Lg *lg_num, Lg data) {
    if (lg_num == NULL) 
        return LG_ERR;
    
    return LG_OK;
}

// f1.4
int set_littleg_zero(Lg *lg_num) {
    if (lg_num == NULL) 
        return LG_ERR;
    
    return LG_OK;
}


int clear_littleg(Lg *lg_num) {
    if (lg_num == NULL) 
        return LG_ERR;

    return LG_OK;
}


int free_littleg(Lg *lg_num) {
    if (lg_num == NULL) 
        return LG_ERR;
        
    return LG_OK;
}