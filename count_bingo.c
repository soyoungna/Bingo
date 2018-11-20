#include "function.h"

int count_bingo(int bingo_array[N][N],int result)
{
	int x,y;
	int sum;
	
    result=0;
	for(y=0;y<N;y++)//세로빙고만들기 
	{   
	    sum = 0;
		for(x=0;x<N;x++)
		{			
          sum+=bingo_array[x][y];
		}
		
		if(sum==0)
		{
	    	result ++;
		}
    }
    
    
	for(x=0;x<N;x++)//가로빙고 만들 기 
	{    
	    sum = 0;
		for (y=0;y<N;y++)
		{   
		  	sum+=bingo_array[x][y];
		}
		if(sum==0)
		{
			result ++;
		  }
    }
    
	  
	    sum = 0; //대각선 빙고만들기(왼쪽위부터 오른쪽 아래까지)
	   for(x=0; x<N; x++)
	    {   
		    sum+=bingo_array[x][x]; 
		}
		if(sum==0)
		   {		
	         result++;
	       }
	       
	       
    	sum = 0;//대각선 빙고 만들기 (왼쪽아래부터 오른쪽 위까지)  
	   for(x=0;x<N;x++)
	   {
		   sum+=bingo_array[x][N-x-1];		  
        }  
		if(sum==0)
	      {
            result++;
          }	
		 	    
	
	
	return result;
}
