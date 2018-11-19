#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
#define M 3
int get_numberbyCom(int bingo_array[N][N])
{
	int num;
	int x,y;
	num = rand() % N*N+1;
while(1)
{	
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
	}
	printf("컴퓨터는 %d 을 선택하였습니다.\n",num);
	
	return num;
}
