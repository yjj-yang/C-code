#define _CRT_SECURE_NO_WARNINGS  1	
#include <stdio.h>


int main()
{
	int a,b,c,i,mid,count,sum;
	scanf("%d", &a);
	printf("2  ");
	count = 0;
	sum = 0;
	for (c = 2; c < a; c++)
	{
		for (i = 2; i <= c; i++)
		{
			b = c % i;
			if (b != 0)
			{
				sum += c;
				if (sum < a)
				{
					mid = 1;
					count += mid;
					printf("%d  ", c);
				}
				break;
			}
			break;
		}
	}
	printf("cound=%d\n", count+1);
	return 0;
}