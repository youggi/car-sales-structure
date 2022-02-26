#ifndef USER_H
#define USER_H

enum USER_ROLE {
    CUSTOMER,
    ADMIN
};

typedef struct user_t {
    int id;
    char name[20];
    char password[20];
    enum USER_ROLE role;
} USER;

#endif;

/* 사용자 기능 */
// 고객 계정 생성
// 로그인

/* 관리자 기능 */
// 관리자 계정 생성 (권한 토큰 + 역할(ADMIN))

// 차량 입고 (프로그램 시작 시 또는 관리자 선택 시 차량 상품 삽입)
// 차랑 출고 (사용자가 '주문'을 하면 차량 상품 목록에서 삭제)
// 재고 현황 확인 (차량 목록 출력)