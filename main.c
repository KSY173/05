#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int answer = 59;
	int x;
	int trial = 0;
	
	do
	{
		printf("Guess a number :");	//�Է��ض� ���� ���
		scanf("%d", &x);//�Է��� ����
		
		if ( x > answer)
		{	
			printf("low!\n");//�Է¼��ڰ� ���亸�� ū�� ������ ��� 
			trial = trial + 1;
		}
		else if ( x < answer)
		{
			printf("high!\n");
			trial = trial + 1;
		}
	}
	while (x != answer);//����� ������ ���� �Ǵ� 
		
	printf("Number of trial = %i\n", trial + 1);//�õ� Ƚ�� ��� 
	return 0;
}
