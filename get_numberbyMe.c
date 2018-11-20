#include "function.h"

int get_numberbyMe(int bingo_array[N][N]){
    
	int x,y;
	int num;
	while(1)//while문 이용해서 사용자의 숫자를 받는다 숫자 num이 1~N*N사이에 있으면 배열 bingo_array[x][y]인 자리가 num이 된다.아니면다시 숫자 선택하도록한다 
	{   
		printf("1~25사이의 숫자을 입력하시오 : ");
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
		 	printf("1~25사이의 수를 입력하셔야합니다\n");
		 }
   }
}

