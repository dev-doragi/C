#include <stdio.h>

int main()
{
	int temp = 14, * p, ** pp;

	p = &temp;
	pp = &p;

	printf("temp 주소 : %d\n", &temp);
	printf("p 값 : %d\n", p);
	printf("pp 값 : %d\n", pp);
	printf("temp 값= %d\n", temp);
	printf("*p = %d\n", *p);
	printf("p 주소= %d\n", &p);
	printf("*pp = %d\n", *pp);
	printf("**pp = %d\n", **pp);

	(*pp)++;
	//(**pp)++;
	printf("p 값 = %d\n", p);
	printf("temp5=%d\n", *p);
	printf("temp6=%d\n", **pp);
}