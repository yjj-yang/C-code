#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void menu()
{
	printf("*********************\n");
	printf("****** 1.play *******\n");
	printf("****** 0.exit *******\n");
	printf("*********************\n");
}
void game()
{
	int rad =rand()%100+1;
	int guess =0;
	while(1)
	{
		printf("�������\n");
		scanf("%d",&guess);
		if(guess>rad)
		{
			printf("���ִ���\n");
		}
		else if(guess<rad)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ��¶��ˣ�\n");
			break;
		}
	}	
 } 
int main() 
{
	int input = 0;
	
	srand((unsigned int)time(NULL)); 
    do
	{	
		menu();
		printf("��ѡ��\n");
		scanf("%d",&input);
		switch(input)
		{
		case 1:
			printf("������:>\n");
			game();
			break;
		case 0:
			printf("�˳�\n");
			break;
		default:
			printf("ֻ������0��1������������\n");
		}
	}while(input);
	return 0;
}
