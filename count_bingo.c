#include "function.h"

int count_bingo(int bingo_array[N][N],int result)
{
	int x,y;
	int sum;
	
    result=0;
	for(y=0;y<N;y++)//���κ������ 
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
    
    
	for(x=0;x<N;x++)//���κ��� ���� �� 
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
    
	  
	    sum = 0; //�밢�� �������(���������� ������ �Ʒ�����)
	   for(x=0; x<N; x++)
	    {   
		    sum+=bingo_array[x][x]; 
		}
		if(sum==0)
		   {		
	         result++;
	       }
	       
	       
    	sum = 0;//�밢�� ���� ����� (���ʾƷ����� ������ ������)  
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
