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
    
    printf("��ǻ�� ����� \n");
    
    initiate_bingo(combingo); 
    print_bingo(combingo);
     
  while(1){
  
    get_numberbyMe(userbingo); // ���� ��ȣ ���� 
	process_bingo(userbingo); // ���� ������ ���� 0���� ����� 
	process_bingo(combingo); //��ǻ�� ������ 0���� ����� 
	
	get_numberbyCom(combingo); //��ǻ�� ��ȣ ���� 
	process_bingo(userbingo); //���� ������ ���� 0���� ����� 
	process_bingo(combingo); //��ǻ�� ������ 0���� �����
	
	count_bingo(userbingo);
    count_bingo(combingo);

	print_bingo(userbingo);
    printf("��ǻ�� ����� \n");
    print_bingo(combingo);
    
    
    
	turn ++;
 }
if(count_bingo(userbingo)==M)
	{
    	printf("�����մϴ�! �¸��ϼ̽��ϴ�!^^");
    	
	}
	
else(count_bingo(combingo)==M);
    {
	     printf("�����Դϴ٤��й��ϼ̽��ϴ٤�");
    
	} 
	
	printf("�õ�Ƚ�� : %d ",turn);
	
	
 	return 0;
}

	






 

	
	
	

