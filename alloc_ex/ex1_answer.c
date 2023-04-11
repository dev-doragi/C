#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct list* inp_2(struct list* m);
struct list* nalloc();

struct list
{
	char* nam; //nam[10];
	char* tel; //tel[20];
};

struct list* nalloc()
{
	return((struct list*)malloc(sizeof(struct list)));
}

struct list* inp_2(struct list* m)
{
	char* nam1 = (char *)malloc(10);
	char* tel1 = (char *)malloc(10);
	m = nalloc();
	scanf("%10s %10s", nam1, tel1);
	m->nam = nam1;
	m->tel = tel1;

	return m;
}

main()
{
	struct list* m, * p;
	m = NULL;
	p = nalloc();
	p = inp_2(m);
	printf("\n%s \n%s \n", p->nam, p->tel);

	free(p);
}

