#include <stdio.h>
#include <stdlib.h>
#include "initial_bingo.h"
#include "print_bingo.h"
#include "get_numberbyMe.h"
#include "get_numberbyCom.h"
#define N 5
int get_numberbyCom(int bingo_array[N][N],int num2){

	num2 = rand() % N*N+1;
	printf("컴퓨터는 %d 을 선택하였습니다.",num2);
	scanf("%d",num2);
	
	return num
