#include "function.h"

int get_numberbyMe(int bingo_array[N][N]){
    
	int x,y;
	int num;
	while(1)//while�� �̿��ؼ� ������� ���ڸ� �޴´� ���� num�� 1~N*N���̿� ������ �迭 bingo_array[x][y]�� �ڸ��� num�� �ȴ�.�ƴϸ�ٽ� ���� �����ϵ����Ѵ� 
	{   
		printf("1~25������ ������ �Է��Ͻÿ� : ");
		scanf("%d",&num);
		
		if(num>=1 && num<=N*N)
		{   
			for(x=0;x<N;x++)
			{
				for(y=0;y<N;y++)
				{
					bingo_array[x][y]==num;
				}
			}
			 break;

		 }
		 else
		 {  
		 	printf("1~25������ ���� �Է��ϼž��մϴ�\n");
		 }
   }
}

