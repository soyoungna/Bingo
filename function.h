#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
#define M 3
int bingo_array[N][N];
int userbingo[N][N];
int combingo[N][N];
	
int initiate_bingo(int bingo_num[N*N]);
int print_bingo(int bingo_array[N][N]);
int get_numberbyMe(int bingo_array[N][N]);
int get_numberbyCom(int bingo_array[N][N]);
int process_bingo(int bingo_array[N][N]);
int count_bingo(int bingo_array[N][N],int result);

