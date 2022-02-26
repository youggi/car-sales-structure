/* 자동차 제조류 */
#ifndef PRODUCT_H
#define PRODUCT_H

enum OEM {
    HYUNDAI,
    KIA,
    GENESIS
};

/* 연료 */
enum FEUL {
    GASOLINE,
    DIESEL,
    LPG,
    EV, // 전기
    HEV, // 하이브리드
    FCEV // 수소 전기차
};

/* 상품 구조체 */
// auto, vehicle, car, product
typedef struct product_t {
    int id;
    char model[100]; // 모델명
    OEM oem; // 제조사
    int price; // 가격
    FEUL fuel; // 연료
    double gas_mileage; // 연비
    // + 배기량?

    struct product_t *next;
} PRODUCT;

typedef PRODUCT *LP_PRODUCT;

#endif