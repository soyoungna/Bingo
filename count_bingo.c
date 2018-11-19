#include <stdio.h>
#include <stdlib.h>
#include "initial_bingo.h"
#include "print_bingo.h"
#include "get_numberbyMe.h"
#include "get_numberbyCom.h"
#include "process_bingo.h"
#include "count_bingo.h"
#define N 5
#define M 3 

int count_bingo(int bingo_array[N][N])
{
	int x,y;
	int userbingo[N][N];
	int combingo[N][N];
	
	int sum=0;
	int result =0;
	
	for(y=0;y<N;y++)
	{
		sum= 0;
		for(x=0;x<N;x++)
		{						
          sum+=bingo_array[x][y];
		}
		if(sum==0){
	    	result ++;
		}
	}
	for(x=0;x<N;x++)
	{
		for (y=0;y<N;y++)
		{
			sum+=bingo_array[x][y];
		}
		if(sum==0)
		{
			result ++;
		}
	}
	for(x=0;x<N;x++){
		sum+=bingo_array[x][x];
		if(sum==0)
		{		
	       result ++;
	    }
	}
	for(x=0;x=N;x++)
	{
		sum+=bingo_array[x][N-x+1];
		
	   if(sum==0)
	    {
           result ++;
        }
	}
	
	return result;
}
