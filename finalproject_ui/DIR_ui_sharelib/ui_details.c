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
printf("\n                              DETAILS\n");
    
	for(int i = 0; i< 66;i++)
	printf("=");
	printf("\nName (ex: sonata)\n");
	printf("Brand  (ex: HYUNDAI)\n");
	printf("Engine  (ex: Digeal\n");
	printf("Kind  (ex: SUV)\n");
	printf("Price  (ex: $2000 $4000)\n");
	printf("DATE  (ex: 2022-02-26)\n");
	printf("ABLE PARTs \n");
	printf("ABLE COLOR \n");
	printf("COMMENTS \n");
	printf("SIZE \n");
	printf("Fuel efficiency \n");
	printf("\n");
	
for(int i = 0; i< 66;i++)
        printf("=");
printf("\n                              ★★ Menu ★★\n1:APPLY PURCHASING\n8:MyPage\n9:LogOut\n0:exit\n\n");
printf("Select Menu :\n");
return 0;
}
