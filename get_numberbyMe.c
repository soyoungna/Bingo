#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
#define M 3

int get_numberbyMe(int bingo_array[N][N]){
    
	int x,y;
	int num;
	while(1)
	{   
		printf("1~25사이의 숫자을 입력하시오 : ");
		scanf("%d",&num);
		
		if(num>=1 && num<=N*N)
		{
			for(x=0;x<N;x++)
			{
				for(y=0;y<N;y++)
				{
					if(bingo_array[x][y]==num)
					{
						bingo_array[x][y];
					}
				}
			}break;

		 }
		 else
		 {
		 	printf("1~25사이의 수를 입력하셔야합니다");
		 }
   }
}

