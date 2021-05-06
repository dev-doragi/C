#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define YES 1
#define NO 0
#define NUL 0

#define LIST struct list
LIST{
	char* data;
	LIST* nleft;
	LIST* nright;
};

LIST* node(LIST* rp, char* ndata);
int inp_2(char* idata);
	//이름을 입력받아 NO 반환시 노드 생성하고,
	//이름에 q나 Q가 입력되면 노드생성하지 않음
LIST* nalloc();
char* strsv(char* sl);
void prn(LIST* pp);

int main()
{
	LIST* root, * node();
	char data[15];
	int key;
	root = NUL;
	do {
		printf("\n input-1		display-2		end-6 \n");
		printf("\n key -->");
		scanf_s("%d", &key);

		if (key == 1) {
			printf("\n -----------  input  ------------ ");
			printf("\n -------------------------------- ");
			printf("\n --- If data is q then exit.. --- ");
			printf("\n -------------------------------- ");
			while (inp_2(data) == NO)
			{
				root = node(root, data);
			}
		}
		if (key == 2) {
			printf("\n -------- display  data --------- ");
			prn(root);
		}
		if (key == 6) {
			printf("\n ------------  end  ------------- ");
			break;
		}
	} while (key == 1 || key == 2 || key == 6);

	return 0;
}

LIST* node(LIST* rp, char* ndata)
{
	LIST* nalloc();

	int cmp;
	if (rp == NUL) {
		rp = nalloc();
		rp->data = strsv(ndata);
		rp->nleft = rp->nright = NUL;
	}
	else if ((cmp = strcmp(ndata, rp->data)) == 0) {
		printf("\n -------------------------------------------- \n");
		printf("		DATA = %-15s \n", rp->data);
		printf("\n -------------------------------------------- \n");
	}
	else if (cmp < 0) {
		rp->nleft = node(rp->nleft, ndata);
	}
	else
		rp->nright = node(rp->nright, ndata);
	return(rp);
}

int inp_2(char *idata)
{
	printf("\n  data  -->");
	scanf_s("%s", idata, 15);
	if (*idata == 'q' || *idata == 'Q')
		return(YES);
	return(NO);
}

LIST* nalloc()
{
	return((LIST*)malloc(sizeof(LIST)));
}

char* strsv(char* sl)
{
	char* p;
	int n = strlen(sl) + 1;
	if ((p = (char*)malloc(n)) != NUL)
		strcpy_s(p, n, sl);
	return(p);
}

void prn(LIST* pp)
{
	if (pp != NULL) {
		prn(pp->nleft);
		printf("%-15s \n", pp->data);
		prn(pp->nright);
	}
}