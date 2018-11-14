#include <stdio.h>
#include <stdlib.h>
#define N 5
#define M 3 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int bingo_array[N][N];
	int i;
	int bingo_num[N];
	void initiate_bingo();
	void print_bingo();
	int get_number_byMe();
	int get_number_byCom();
	int process_bingo();
	int count_bingo();

    initiate_bingo();
    
    print_bingo();
    
	return 0;
}
void initiate_bingo() //난수 이용해서 빙고판 만들기  
{ 
   
	int bingo_num[N*N];
	int i;
    int temp,sour,dest;
    
	srand((unsigned int)time(NULL));
	
	for (i=0;i<=N*N;i++){
		
		bingo_num[i]=i+1;
	}// 빙고 배열에 1부터 N*N까지 넣기
	
		sour=rand() % (N*N)+1;
		dest=rand() % (N*N)+1;
	
		temp = bingo_num[sour];
        bingo_num[sour] = bingo_num[dest];
        bingo_num[dest] = temp;
	 
	}

void print_bingo()
{
	int x,y;
    int bingo_array[N][N]; 
    
	for(x=0;x<N;x++){
		for(y=0;y<N;y++){
			
			printf(" %d ",bingo_array[x][y]);
		}
		printf("\n");
	}
	
}
	

