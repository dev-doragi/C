#include <stdio.h>

int main()
{
	int temp = 14, * p, ** pp;

	p = &temp;
	pp = &p;

	printf("temp 林家 : %d\n", &temp);
	printf("p 蔼 : %d\n", p);
	printf("pp 蔼 : %d\n", pp);
	printf("temp 蔼= %d\n", temp);
	printf("*p = %d\n", *p);
	printf("p 林家= %d\n", &p);
	printf("*pp = %d\n", *pp);
	printf("**pp = %d\n", **pp);

	(*pp)++;
	//(**pp)++;
	printf("p 蔼 = %d\n", p);
	printf("temp5=%d\n", *p);
	printf("temp6=%d\n", **pp);
}