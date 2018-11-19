#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
#define M 3

int process_bingo(int bingo_array[N][N]){
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
