#include <stdio.h>
#include <stdlib.h>
#include "initial_bingo.h"
#define N 5
#define M 3

int print_bingo(int bingo_array[N][N])//빙고판 출력하기
 
{
	int x,y;

	for(x=0;x<N;x++)
	{
		for(y=0;y<N;y++)
		{	
			printf(" %d ",bingo_array[x][y]);
		}
		printf("\n");
	}
	
}
