#include <stdio.h>
#include <stdlib.h>
#define N 5
#define M 3 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
    void initiate_bingo();
	void print_bingo();
	void get_number_byMe();
	void get_number_byCom();
	void process_bingo(int count[N][N],int num);
	void count_bingo();
	int bingo_array[N][N];
	int count[N][N];
	int num1,num2;
	int userbingo[N][N];
	int combingo[N][N];
int main(int argc, char *argv[]) {
	
	printf("---------Game start---------");
	printf("\n");
	
    srand((unsigned int)time(NULL));
     
  
    initiate_bingo(userbingo);
	print_bingo(userbingo);
    
    printf("컴퓨터 빙고\n");
    
    initiate_bingo(combingo); 
    print_bingo(combingo);
    
    
    get_numberbyMe();
	process_bingo(userbingo,num1);
	process_bingo(combingo,num2);
    
    get_numberbyCom();
    process_bingo(userbingo,num1);
    process_bingo(combingo,num2);
    
    print_bingo(userbingo);
    
	return 0;
}
void initiate_bingo() //난수 이용해서 빙고판 만들기  
{ 
   
	int bingo_num[N*N];
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

void print_bingo()//빙고판 출력하기
 
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
void get_numberbyMe(){
	int num1;
	printf("1~25중에서 숫자를 입력하시오 : ");
	scanf("%d",&num1); 
	 
	 return 1;
	
}

void get_numberbyCom(){
	int num2;
	
	num2 = rand() % N*N+1;
	printf("컴퓨터는 %d 을 선택하였습니다.",num2);
	scanf("%d",num2);
	
	return 1;
}
void process_bingo(int bingo[N][N],int num){
	
	int a,b;
	for(a=0;a<N;a++){
		for(b=0;b<N;b++){
			
			if(bingo[a][b]==num){
				
				bingo[a][b]=-1;
			}
		}
	}
	
	
}

 
	
void count_bingo(){
	
	
}
