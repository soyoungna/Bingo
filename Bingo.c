#include <stdio.h>
#include <stdlib.h>
#include "initial_bingo.h"
#include "print_bingo.h"
#include "get_numberbyMe.h"
#include "get_numberbyCom.h"
#include "process_bingo.h"
#include "count_bingo.h"
#define N 5
#define M 3 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
    
	
	int number;
	int num1,num2;
	int userbingo[N][N];
	int combingo[N][N];
	int result=0;
int main(int argc, char *argv[]) {
	
	int user = 0;
	int com = 0;
	
	printf("---------Game start---------");
	printf("\n");
	
    srand((unsigned int)time(NULL));
    initiate_bingo(userbingo);
    
	print_bingo(userbingo);
    
    printf("컴퓨터 빙고당 \n");
    
    initiate_bingo(combingo); 
    print_bingo(combingo);
     
  while(1){
  
   num1=get_numberbyMe(userbingo,num1); // 내가 번호 선택 
	process_bingo(userbingo,num1); // 나의 빙고판 숫자 0으로 만들기 
	process_bingo(combingo,num2); //컴퓨터 빙고판 0으로 만들기 
	
	num2=get_numberbyCom(combingo,num2); //컴퓨터 번호 선택 
	process_bingo(userbingo,num1); //나의 빙고판 숫자 0으로 만들기 
	process_bingo(combingo,num2); //컴퓨터 빙고판 0으로 만들기
	
	print_bingo(userbingo);
    
    printf("컴퓨터 빙고당 \n");
    
    print_bingo(combingo);
    	
    if(count_bingo(userbingo)==M)
	{
    	break;
	}
	else(count_bingo(combingo)==M);
	{
		break;
	}
}

	return 0;
}

	

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


int process_bingo(int bingo_array[N][N],int num){
	
	int x,y;
	int userbingo[N][N];
	int combingo[N][N];
	int num1,num2;
	
	for(x=0;x<N;x++)
	{
		for(y=0;y<N;y++)
		{	
			if(bingo_array[x][y]==num)
			{
				bingo_array[x][y]=0;
				
			}
		}
	}
  
	
}

 
int count_bingo(int bingo_array[N][N]){
	int x,y;
	int userbingo[N][N];
	int combingo[N][N];
	
	int sum=0;
	int result =0;
	
	for(y=0;y<N;y++){
		sum= 0;
		for(x=0;x<N;x++){
			
	       sum+=bingo_array[x][y];
		}
		if(sum==0){
		
			result ++;
		}
	}
	
	for(x=0;x<N;x++){
		for (y=0;y<N;y++){
			
			sum+=bingo_array[x][y];
		}
		if(sum==0){
			result ++;
		}
	}
	for(x=0;x<N;x++){
		sum+=bingo_array[x][x];
		if(sum==0){
		
	 result ++;
	   }
	}
	
	for(x=0;x=N;x++){
		
		sum+=bingo_array[x][N-x+1];
		
	   if(sum==0){

	     result ++;
        }
	}
	
	return result;
}
	
	

