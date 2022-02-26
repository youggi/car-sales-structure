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
   
	printf("\n                              MYPAGE\n\n");	
 
	for(int i = 0; i< 66;i++)
	printf("=");
	printf("\n");
	printf("ID 	 : ABCD\n");
	printf("PASSWORD : ****\n");
	printf("NICKNAME : WOW \n");
	printf("REALNAME : WOW \n");


for(int i = 0; i< 66;i++)
        printf("=");
printf("\n                              ★★ Menu ★★\n1:REVISING INFO\n2:BUYING LIST\n3:BUCKET LIST\n4:MEMBER LIST\n5:SALES LIST\n6:STOCK LIST\n8:MAIN\n9:LOGOUT\n0:exit\n\n");
printf("-> Select Menu :");
return 0;
}
