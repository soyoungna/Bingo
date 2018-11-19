#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
#define M 3

int count_bingo(int bingo_array[N][N])
{
	int x,y;
	int sum;
	int result =0;
  
	for(y=0;y<N;y++)
	{
		for(x=0;x<N;x++)
		{	sum= 0;					
          sum+=bingo_array[x][y];
		}
		  if(sum==0)
		  {
	    	result ++;
		  }
    }
	for(y=0;y<N;y++)
	{
		for (y=0;y<N;y++)
		{   sum= 0;
			sum+=bingo_array[x][y];
		}
		  if(sum==0)
		  {
			result ++;
		  }
    }
    
	   for(x=0;x<N;x++)
	    {
		    sum+=bingo_array[x][x];
		}
		if(sum==0)
		{		
	       result ++;
	    }
	   
	   for(x=0;x=N;x++)
	   {
		sum+=bingo_array[x][N-x+1];
		
        }  	
	    if(sum==0)
	    {
           result ++;
        }
	
   
	return result;
}
