#include "function.h"


int get_numberbyCom(int bingo_array[N][N])//컴퓨터가 선택하는 숫자는 난수를 이용해서 1~25사이의 수를 하나 선택하게 한다. 
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
					bingo_array[x][y]==num;
				}
			}
			break;

		 }
	}
	printf("컴퓨터는 %d 을 선택하였습니다.\n",num);
	
	return num;
}
