#include <stdio.h>
#include <stdlib.h>
#include "initial_bingo.h"
#include "print_bingo.h"
#define N 5
#define M 3 

int get_numberbyMe(int bingo_array[N][N],int num1){


	int check=0;
	do{
	
	printf("1~25중에서 숫자를 입력하시오 : ");
    scanf("%d",&num1);
	
	if(num1<1 || num1 > 25){
	       check=1;
			}
    else{
    	
    	break;
	}
	}while(check==1);
    
	 return num1;
	
}

