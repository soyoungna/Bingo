#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
#define M 3
int initiate_bingo(int bingo_num[N*N]) //���� �̿��ؼ� ������ �����  
{ 
   	int i;
	int temp;
	int rannum;
	
	for (i=0;i<N*N;i++){
		
		bingo_num[i]=i+1;
	}
	
	for (i=0;i<N*N;i++){
		rannum = rand() % N*N+1;
		temp = bingo_num[i];
		bingo_num[i]=bingo_num[rannum];
		bingo_num[rannum] = temp;
		
	}
	
		}