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
  
    get_numberbyMe(userbingo); // ���� ��ȣ ���� 
	process_bingo(userbingo); // ���� ������ ���� 0���� ����� 
	process_bingo(combingo); //��ǻ�� ������ 0���� ����� 
	
	get_numberbyCom(combingo); //��ǻ�� ��ȣ ���� 
	process_bingo(userbingo); //���� ������ ���� 0���� ����� 
	process_bingo(combingo); //��ǻ�� ������ 0���� �����
	
	mresult = count_bingo(userbingo,mresult);//���� ������ 0�� ���� ���� 
    cresult = count_bingo(combingo,cresult);//��ǻ�� ������ 0�� ���� ���� 
	
    printf("����� ����\n");  
	print_bingo(userbingo);//�ٽ� ���� ������ ����Ʈ 
     
		turn ++; //�õ�Ƚ���� �����Ѵ� 
	if(mresult>=M && cresult<=M) 
	{
		printf("�����մϴ�! �¸��ϼ̽��ϴ�!^^");
	 	break;
	}

	else if(mresult<=M && cresult>=M)
	{
    	printf("�����Դϴ٤��й��ϼ̽��ϴ٤�.\n");
    	break;
	}
	
   else if(mresult>=M && cresult>=M)
    {
	     printf("���");
         break;
	} 
	
   }	
	
	printf("�õ�Ƚ�� : %d ",turn);

 	return 0;
}








 

	
	
	

