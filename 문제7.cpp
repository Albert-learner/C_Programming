#include <stdio.h>

int main()
{
	int i = 0, j = 0;

	while (i < 5)
	{
		while(j < i)
		{
			printf("o ");
			j++;
		}
		j = 0; //초기화!!!!!!!1
		printf(" *\n");
		i++; //반복문 종료조건!!
	}
	return 0;
}