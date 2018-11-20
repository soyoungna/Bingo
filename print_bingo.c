#include "function.h"

int print_bingo(int bingo_array[N][N])//initiate_bingo에서 초기화한 빙고판을 출력한다. 
{
	
	int x,y;  
   
	for(x=0;x<N;x++){  
 		for(y=0;y<N;y++){  
			  
 			printf("%4d ",bingo_array[x][y]);  
 			
		}   		printf("\n\n");  

    }
}
