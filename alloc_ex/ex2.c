////#define _CRT_SECURE_NO_WARNINGS
//#include <stdlib.h>
//#include <stdio.h>
//
//struct list {
//	char name[10];
//	int score;
//	struct list* link;
//};
//struct list* list1, * head, * pre, * next;
//main()
//{
//
//	int i;
//	head = NULL;
//
//	for (i = 0; i < 3; i++)
//	{
//		list1 = (struct list*)malloc(sizeof(struct list));
//		scanf_s("%s %d", list1->name, sizeof(list1->name), &(list1->score));
//
//		if (head == NULL)
//			head = list1;
//		else
//			pre->link = list1;
//		list1->link = NULL;
//		pre = list1;
//	}
//
//	//for (next = head; next != NULL; next = next->link)
//	//	printf("%s %s\n", next->name, next->score);
//
//	while (head != NULL)
//	{
//		next = head->link;
//		printf("%s %d\n", head->name, head->score);
//		printf("Deleted node ...\n");
//		free(head);
//		head = next;
//	}
//
//	return 0;
//}