#include <stdio.h>
#include <stdlib.h>
#define N 5
#define M 3 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
    void initiate_bingo();
	void print_bingo();
	void get_number_byMe(int bingo_array,int number);
	void get_number_byCom(int bingo_array,int number);
	void process_bingo(int count[N][N],int num);
	void count_bingo(int bingo_array[N][N]);
	int bingo_array[N][N];
	int num1,num2;
	int userbingo[N][N];
	int combingo[N][N];
	int result=0;
int main(int argc, char *argv[]) {
	
	int user,com;
	
	printf("---------Game start---------");
	printf("\n");
	
    srand((unsigned int)time(NULL));
    initiate_bingo(userbingo);
	print_bingo(userbingo);
    
    printf("��ǻ�� ����� \n");
    
    initiate_bingo(combingo); 
    print_bingo(combingo);
     
  do{
  
  get_numberbyMe(userbingo,num1);
	process_bingo(userbingo,num1);
	process_bingo(combingo,num2);
	
	get_numberbyCom(combingo,num2);
	process_bingo(userbingo,num1);
	process_bingo(combingo,num2);
	
	count_bingo(userbingo);
	count_bingo(combingo);
	
	print_bingo(userbingo);
    
    printf("��ǻ�� ����� \n");
    
    print_bingo(combingo);
    
    
    
}while(result=0);

	return 0;
}
void initiate_bingo() //���� �̿��ؼ� ������ �����  
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

void print_bingo()//������ ����ϱ�
 
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
void get_numberbyMe(int bingo_array,int number){


	int check=0;
	do{
	
	printf("1~25�߿��� ���ڸ� �Է��Ͻÿ� : ");
    scanf("%d",&number);
	
	if(number<1 || number > 25){
	       check=1;
			}
    else{
    	
    	break;
	}
	}while(check==1);
    
	 return 0;
	
}

void get_numberbyCom(int bingo_array,int number){

	number = rand() % N*N+1;
	printf("��ǻ�ʹ� %d �� �����Ͽ����ϴ�.",number);
	scanf("%d",number);
	
	return 0;
}
void process_bingo(int bingo[N][N],int num){
	
	int x,y;
	
	for(x=0;x<N;x++){
		for(y=0;y<N;y++){
			
			if(bingo[x][y]==num){
				
				bingo[x][y]=-1;
				
			}
		}
	}
  
	
}

 
	
void count_bingo(int bingo_array[N][N]){
	int x,y;
	
	int sum=0;
	int result =0;
	
	for(y=0;y<N;y++){
		sum= 0;
		for(x=0;x<N;x++){
			
	       sum+=bingo_array[x][y];
		}
		if(sum==-5){
		
			result =1;
		}
	}
	
	for(x=0;x<N;x++){
		for (y=0;y<N;y++){
			
			sum+=bingo_array[x][y];
		}
		if(sum==-5){
			result=1;
		}
	}
	for(x=0;x<N;x++){
		sum+=bingo_array[x][x];
		if(sum==-5){
		
	 result=1;
	   }
	}
	
	for(x=0;x=N;x++){
		
		sum+=bingo_array[x][N-x+1];
		
	   if(sum==-5){

	     result=1;
        }
	}
	return 0;

}
	
	

