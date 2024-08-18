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
		printf("请猜数字\n");
		scanf("%d",&guess);
		if(guess>rad)
		{
			printf("数字大了\n");
		}
		else if(guess<rad)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你猜对了！\n");
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
		printf("请选择\n");
		scanf("%d",&input);
		switch(input)
		{
		case 1:
			printf("猜数字:>\n");
			game();
			break;
		case 0:
			printf("退出\n");
			break;
		default:
			printf("只能输入0或1，请重新输入\n");
		}
	}while(input);
	return 0;
}
