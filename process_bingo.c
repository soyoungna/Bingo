#include "function.h"

int process_bingo(int bingo_array[N][N])//����ڿ� ��ǻ�Ͱ� ������ ���ڿ� �迭�� ���ڰ� ������ 0���� �ٲ۴�. 
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
