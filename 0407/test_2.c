#include <stdio.h>

int main()
{
	int temp = 14, * p, ** pp;

	p = &temp;
	pp = &p;

	printf("temp �ּ� : %d\n", &temp);
	printf("p �� : %d\n", p);
	printf("pp �� : %d\n", pp);
	printf("temp ��= %d\n", temp);
	printf("*p = %d\n", *p);
	printf("p �ּ�= %d\n", &p);
	printf("*pp = %d\n", *pp);
	printf("**pp = %d\n", **pp);

	(*pp)++;
	//(**pp)++;
	printf("p �� = %d\n", p);
	printf("temp5=%d\n", *p);
	printf("temp6=%d\n", **pp);
}