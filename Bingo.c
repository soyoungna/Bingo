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
	
	printf("���ϴ� ������ ���� ���Ͻÿ� : ");
	scanf("%d",&N);
	
	printf("����ȿ� ���ڸ� �Է��ϼ���: ");
	for (i=0;i<N;i++)	
	    for (j=0;j<N;j++){
	    	scanf("%d%d\n",&get_num[i][j]); //�̰��� ���� ����� �������̺� ������ �߸���, �������̺��� ��Ը�����?
	 
	    	
		}
	
	 return 0;
	}


	

