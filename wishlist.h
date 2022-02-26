#ifndef WISHLIST_H
#define WISHLIST_H

#include "user.h"
#include "product.h"

/* 위시 리스트 구조체 */
typedef struct wishlist_t {
    USER user;
    PRODUCT product;    
} WISHLIST;

#endif