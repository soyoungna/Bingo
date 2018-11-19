#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
#define M 3 
    

    int number;
	int userbingo[N][N];
	int combingo[N][N];
	int result=0;
	
int main(int argc, char *argv[]) 
{
	int mnum;
	int cnum;
	int turn=0; 
	printf("---------Game start---------");
	printf("\n");
	
    srand((unsigned int)time(NULL));
    initiate_bingo(userbingo);
	print_bingo(userbingo);
    
    printf("컴퓨터 빙고당 \n");
    
    initiate_bingo(combingo); 
    print_bingo(combingo);
     
  while(1){
  
    get_numberbyMe(userbingo); // 내가 번호 선택 
	process_bingo(userbingo); // 나의 빙고판 숫자 0으로 만들기 
	process_bingo(combingo); //컴퓨터 빙고판 0으로 만들기 
	
	get_numberbyCom(combingo); //컴퓨터 번호 선택 
	process_bingo(userbingo); //나의 빙고판 숫자 0으로 만들기 
	process_bingo(combingo); //컴퓨터 빙고판 0으로 만들기
	
	count_bingo(userbingo);
    count_bingo(combingo);

	print_bingo(userbingo);
    printf("컴퓨터 빙고당 \n");
    print_bingo(combingo);
    
    
    
	turn ++;
 }
if(count_bingo(userbingo)==M)
	{
    	printf("축하합니다! 승리하셨습니다!^^");
    	
	}
	
else(count_bingo(combingo)==M);
    {
	     printf("유감입니다ㅠ패배하셨습니다ㅠ");
    
	} 
	
	printf("시도횟수 : %d ",turn);
	
	
 	return 0;
}

	






 

	
	
	

