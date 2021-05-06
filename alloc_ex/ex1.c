//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//
//struct list 
//{
//	char *nam; //nam[10];
//	char *tel; //tel[20];
//};
//
//struct list* nalloc()
//{
//	return((struct list*)malloc(sizeof(struct list)));
//}
//
//struct list *inp_2()
//{
//	struct list* p = nalloc();
//
//	if (p != NULL)
//	{
//		strcpy(p->nam, "최재인");
//		strcpy(p->tel, "01099486558");
//	}
//
//	return p;
//}
//
//int main()
//{
//	struct list *p1;
//
//	p1 = inp_2();
//
//	printf("이름 : %s\n", p1->nam);
//	printf("전화번호 : %s\n", p1->tel);
//
//	free(p1);
//
//	return 0;
//}