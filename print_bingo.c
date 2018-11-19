#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
#define M 3

int print_bingo(int bingo_array[N][N]){
	
	int x,y;  
   
	for(x=0;x<N;x++){  
 		for(y=0;y<N;y++){  
			  
 			printf(" %d ",bingo_array[x][y]);  
		}   		printf("\n");  

}
}
