//#include <stdio.h>
//
//int main()
//{
//	struct list {
//		char* name;
//		int no;
//		struct list* next;
//	};
//
//	struct list k[] = { {"Kim", 100}, {"Lee", 90}, {"Choi", 80} };
//
//	struct list *p = k;
//
//	//k[0].next = &k[1];
//	//k[1].next = &k[2];
//	//k[2].next = '\0';
//
//	//for (p = k; p; p = p->next)
//	//	printf("%s %d\n", p->name, p->no);
//
//	for (p = k; p < k+3; p++ )
//		printf("%s %d\n", p->name, p->no);
//
//	return 0;
//
//}