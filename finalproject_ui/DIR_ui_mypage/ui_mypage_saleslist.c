#include <stdio.h>

int main()
{
    for (int i = 0; i < 5; i++)    // 5번 반복. 바깥쪽 루프는 세로 방향
    {
        for (int j = 0; j < 66; j++)    // 5번 반복. 안쪽 루프는 가로 방향
        {   if(i==0 || i ==4)
            printf("=");
            else{
                
            if(j==0 || j==65)
            printf("*");
            else  
            printf(" ");
                // 별 출력
       	 
            }
        
        }
        printf("\n");              // 가로 방향으로 별을 다 그린 뒤 다음 줄로 넘어감
    }
   
	printf("\n                              MYPAGE_ADMIN_SALESLIST\n\n");	
 
	for(int i = 0; i< 66;i++)
	printf("=");
	printf("\n ID |  DATE   |    BUYER   |   PRICE     |   ORDER    |   RELEASE  \n");
	printf("------------------------------------------------------------------\n");
	printf(" 01 |  sonata  |   sonngyoug  |    $1200    |   1992-23-22    |  20220226 \n");
	printf(" 02 |  sonata  |   HYUNDAI  |    DIGEAL    |    SUV    |  1000won \n");
	printf(" 03 |  sonata  |   HYUNDAI  |    DIGEAL    |    SUV    |  1000won \n");
	printf(" 04 |  sonata  |   HYUNDAI  |    DIGEAL    |    SUV    |  1000won \n");
	printf(" 05 |  sonata  |   HYUNDAI  |    DIGEAL    |    SUV    |  1000won \n");
	printf(" 06 |  sonata  |   HYUNDAI  |    DIGEAL    |    SUV    |  1000won \n");
	printf(" 07 |  sonata  |   HYUNDAI  |    DIGEAL    |    SUV    |  1000won \n");
	printf(" 08 |  sonata  |   HYUNDAI  |    DIGEAL    |    SUV    |  1000won \n");
	printf(" 09 |  sonata  |   HYUNDAI  |    DIGEAL    |    SUV    |  1000won \n");
	printf(" 10 |  sonata  |   HYUNDAI  |    DIGEAL    |    SUV    |  1000won \n");
        printf("\n                                   1/10                           \n");
for(int i = 0; i< 66;i++)
        printf("=");
printf("\nTOTAL SUM: $10000\n");


for(int i = 0; i< 66;i++)
        printf("=");

printf("\n                              ★★ MENU ★★\n1:SEARCH\n2:SORT\n3:DETAIL\n4:PREVIOUS\n5:NEXT\n7:MAIN\n8:MYPAGE\n9:LOGOUT\n0:EXIT\n\n");
printf("-> SELECT MENU :");
return 0;
}
