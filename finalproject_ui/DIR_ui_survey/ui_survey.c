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
    
	printf("\n                              LOGIN_REGISTER\n\n");


	for(int i = 0; i< 66;i++)
	printf("=");

    printf("\n");
	printf("\nA) BIRTHDAY : (ex:20001212 )\n");
        printf("B) FAVORITE COLOR : (ex: BRWON)\n");
        printf("C) DO YOU LIKE SPEED : (ex: YESl\n");
        printf("D) PRICE YOU WANT : (ex: $2000)\n");
        printf("E) DO YOU WANT TO HAVE A EXCPERIENCE OF LATEST TECH?? : (ex:YES\n");
        printf("F) FUEL EFFICIENCY : (ex: 17\n");
	printf("G) KIND : (ex:SUV)\n");
	printf("X) RECOMMAND\n");
        printf("Y) GO LOGIN STATE\n");
        printf("Z) EXIT\n");
        printf("+++++++++++++++++++++++++++\n");
        printf("Select AND INSERT INFO  : (ex: A SONATA)\n");

	
for(int i = 0; i< 66;i++)
        printf("=");
printf("\n");
return 0;
}
