#include "function.h"


int get_numberbyCom(int bingo_array[N][N])//��ǻ�Ͱ� �����ϴ� ���ڴ� ������ �̿��ؼ� 1~25������ ���� �ϳ� �����ϰ� �Ѵ�. 
{
	int num;
	int x,y;
	num = rand() % N*N+1;
	
while(1)
{	
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
	}
	printf("��ǻ�ʹ� %d �� �����Ͽ����ϴ�.\n",num);
	
	return num;
}
