#include <stdio.h>

void head();
int process(int i, int j, int k);
void write(int k2);

int s_value[11][3];
int sparse[8][8] = { {0,0,6,0,0,0,10, 0},
					 {31,0,0,0,0,0,0, 0},
					 {0,0,0,14,0,0,0, 0},
					 {0,15,0,0,0,0,27,0},
					 {0,0,0,31,0,0,0, 0},
					 {0,0,0,0,0,0, 0, 0},
					 {0,0,0,0,0,3, 0, 0},
					 {0,0,1, 0,0,0,35,0} };

int main(void)
{
	int i = 0, j = 0, k = 0;
	int k1;

	head();
	k1 = process(i, j, k);
	write(k1);

	return 0;
}

void head()
{
	printf(" \t\t\t\t Sparse Matrix \n\n");
	printf(" \t 0col\t  1col\t  2col\t  3col\t");
	printf("  4col\t  5col\t  6col\t  7col\n");
}

int process(int i, int j, int k)
{
	for (i = 0; i < 8; i++)
	{
		printf("%3drow\t", i);
		for (j = 0; j < 8; j++)
		{
			if (sparse[i][j] != 0)
			{
				k++;
				s_value[k][0] = i;
				s_value[k][1] = j;
				s_value[k][2] = sparse[i][j];
			}

			printf("  %3d\t ", sparse[i][j]);
		}
		putchar('\n');
	}
	return(k);
}

void write(int k2)
{
	int i = 8, j = 8;
	s_value[0][0] = i;
	s_value[0][1] = j;
	s_value[0][2] = k2;

	printf("\n\n\n\t\t\t\t 0col  1col  2col\n");
	for (i = 0; i <= k2; i++)
	{
		printf("\t\t\t  %3drow  %3d   %3d   %3d \n", i, s_value[i][0], s_value[i][1], s_value[i][2]);
	}
}