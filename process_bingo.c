#include "function.h"

int process_bingo(int bingo_array[N][N])//사용자와 컴퓨터가 선택한 숫자와 배열의 숫자가 같으면 0으로 바꾼다. 
{
    int num;
	int x,y;
    
	for(x=0;x<N;x++)
	{
		for(y=0;y<N;y++)
		{	
			if(bingo_array[x][y]==num)
			{
				bingo_array[x][y]=0;
				
			}
		}
	}
	
}
