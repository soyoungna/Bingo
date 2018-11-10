#include <stdio.h>
#include <stdlib.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int initiate_bingo();
	int print_bingo();
	int get_number_byMe();
	int get_number_byCom();
	int process_bingo();
	int count_bingo();

    initiate_bingo();
	return 0;
}
int initiate_bingo()
{
	int N;
	int get_num[N][N];
	int i=0;
	int j=0;
	
	printf("원하는 빙고의 줄을 말하시오 : ");
	scanf("%d",&N);
	
	printf("빙고안에 숫자를 입력하세요: ");
	for (i=0;i<N;i++)	
	    for (j=0;j<N;j++){
	    	scanf("%d%d\n",&get_num[i][j]); //이것은 내가 만드는 빙고테이블에 들어가야함 잘못됨, 빙고테이블은 어떻게만들지?
	 
	    	
		}
	
	 return 0;
	}


	

