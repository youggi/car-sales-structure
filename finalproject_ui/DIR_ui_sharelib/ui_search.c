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
printf("\n                              SEARCH\n");
    
	for(int i = 0; i< 66;i++)
	printf("=");
	printf("\nA) Name : (ex: sonata)\n");
	printf("B) Brand : (ex: HYUNDAI)\n");
	printf("C) Engine : (ex: Digeal\n");
	printf("D) Kind : (ex: SUV)\n");
	printf("E) Price : (ex: 2000 4000\n");
	printf("\n");
	printf("-> Select Condition you want to search : (ex: A SONATA)\n");
	

for(int i = 0; i< 66;i++)
        printf("=");
printf("\n                              ★★ Menu ★★\n0: exit");	
return 0;
}