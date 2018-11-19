#include <stdio.h>
#include <stdlib.h>
#include "initial_bingo.h"
#include "print_bingo.h"
#include "get_numberbyMe.h"
#include "get_numberbyCom.h"
#include "process_bingo.h"
#define N 5
#define M 3 

int process_bingo(int bingo_array[N][N],int num){
	
	int x,y;
	int userbingo[N][N];
	int combingo[N][N];
	int num1,num2;
	
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
