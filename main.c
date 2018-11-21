#include "function.h"
    

	
int main(void) 
{
	int mresult;
	int cresult;
    int mrst;
    int crst;
	int turn=0; 
	int result;
	printf("---------Game start---------");
	printf("\n");
	
    srand((unsigned int)time(NULL));
    
	initiate_bingo(userbingo);
	print_bingo(userbingo);
    
    initiate_bingo(combingo); 
     
  while(1){
  
    get_numberbyMe(userbingo); // 내가 번호 선택 
	process_bingo(userbingo); // 나의 빙고판 숫자 0으로 만들기 
	process_bingo(combingo); //컴퓨터 빙고판 0으로 만들기 
	
	get_numberbyCom(combingo); //컴퓨터 번호 선택 
	process_bingo(userbingo); //나의 빙고판 숫자 0으로 만들기 
	process_bingo(combingo); //컴퓨터 빙고판 0으로 만들기
	
	mresult = count_bingo(userbingo,mresult);//나의 빙고판 0의 갯수 세기 
    cresult = count_bingo(combingo,cresult);//컴퓨터 빙고판 0의 갯수 세기 
	
    printf("사용자 빙고\n");  
	print_bingo(userbingo);//다시 나의 빙고판 프린트 
     
		turn ++; //시도횟수가 증가한다 
	if(mresult>=M && cresult<=M) 
	{
		printf("축하합니다! 승리하셨습니다!^^");
	 	break;
	}

	else if(mresult<=M && cresult>=M)
	{
    	printf("유감입니다ㅠ패배하셨습니다ㅠ.\n");
    	break;
	}
	
   else if(mresult>=M && cresult>=M)
    {
	     printf("비김");
         break;
	} 
	
   }	
	
	printf("시도횟수 : %d ",turn);

 	return 0;
}








 

	
	
	

