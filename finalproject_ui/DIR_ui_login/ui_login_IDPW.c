#include <stdio.h>

int main()
{
    for (int i = 0; i < 5; i++)    // 5번 반복. 바깥쪽 루프는 세로 방향
    {
        for (int j = 0; j < 66; j++)    // 5번 반복. 안쪽 루프는 가로 방향
        {   if(i==0 || i ==4)
            printf("-");
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
    
	printf("\n                              LOGIN_IDPW\n\n");

        printf("\n");              // 가로 방향으로 별을 다 그린 뒤 다음 줄로 넘어감

	for(int i = 0; i< 66;i++)
	printf("=");

    printf("\n");
	printf("\nA) ID : (ex: sonata)\n");
        printf("B) PW : (ex: HYUNDAI)\n");
	printf("G) LOGIN\n");
        printf("H) GO LOGIN STATE\n");
        printf("Z) EXIT\n");
        printf("+++++++++++++++++++++++++++\n");
        printf("Select AND INSERT INFO  : (ex: A SONATA)\n");

	
for(int i = 0; i< 66;i++)
        printf("=");
printf(":\n");
return 0;
}
