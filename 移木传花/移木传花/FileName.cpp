#define _CRT_SECURE_NO_WARNINGS 1	
#include <stdio.h>


int main()
{
	double a, b, c, d, e, f,i,g,h;
	i = (-1);
	scanf("%lf %lf", &a, &b);
	a > 0 ? c = (int)a : c = ((int)a) * i;
	b > 0 ? d = (int)b : d = ((int)b) * i;
	a > 0 ? e = (a - ((int)a)) : e = (a - ((int)a)) * i;
	b > 0 ? f = (b - ((int)b)) : f = (b - ((int)b)) * i;
	g = c + f;
	h = d + e;
	a > 0 ? g = g : g = g * i;
	b > 0 ? h = h : h = h * i;
	printf("%lf %lf", g, h);
	return 0;
}
