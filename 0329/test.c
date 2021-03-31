#include <stdio.h>

int main()
{
	char *str[3] = { "abc", "def", "hi" }; // str[3][5] 보다 *str[3]이 더 효율적

	char *p1, *p2, *p3;

	int i = 0;

	p1 = str[0];
	p2 = str[1];
	p3 = str[2];

	printf("%s\n", p1);

	puts(p2);

	//for (int i = 0; i < 2; i++)
	//{
	//	putchar(*(p3 + i));
	//}

	while (*p3 != '\0')
		putchar(*p3++); // *p3++ = *(p3++)

	return 0;
}