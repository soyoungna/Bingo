#include "function.h"

int print_bingo(int bingo_array[N][N])//initiate_bingo���� �ʱ�ȭ�� �������� ����Ѵ�. 
{
	
	int x,y;  
   
	for(x=0;x<N;x++){  
 		for(y=0;y<N;y++){  
			  
 			printf("%4d ",bingo_array[x][y]);  
 			
		}   		printf("\n\n");  

    }
}
