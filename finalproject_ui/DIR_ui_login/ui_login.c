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
    
	printf("\n                              LOGIN\n\n");


	for(int i = 0; i< 66;i++)
	printf("=");

    printf("\n");
	printf("                           |                                \n");
	printf("         1.login           |                                \n");
	printf("         2.findIDPW        |         4.nonuser              \n");
	printf("         3.reigister       |                                \n");
	printf("                           |                                \n");
	printf("                           |                                \n");
for(int i = 0; i< 66;i++)
        printf("=");
printf("\n                            ★★ Menu ★★\n1:login\n2:findIDPW\n3:register\n4: nonuser\n-1: exit");	
printf("\n\nSelect Menu :\n");
return 0;
}
