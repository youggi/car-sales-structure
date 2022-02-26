#ifndef ORDER_H
#define ORDER_H

// #include "user.h"
// #include "product.h"


typedef struct order_t {
    int id;
    int order_num;
    int date; // 구매 날짜
    int user_id; // 고객 아이디
    int product_id; // 상품 아이디
    // USER user; // 고객
    // PRODUCT product; // 구매한 상품
    int total_price;
} ORDER;

#endif

// 주문 데이터는 관리자의 '구매내역조회'에서 사용될 예정
// 매출 관리는 어디에서..?

// Question !!
// (1) 구조체 안에 외래키를 포함시킬지? (2) 참조하는 구조체 자체를 포함시킬지?
// (1) 구조체 자체 크기는 감소하나, 파일 입출력이 까다로울 것으로 예상
// (2) 구조체의 크기가 커지지만, 하나의 파일 출력으로 해결될 것으로 예상