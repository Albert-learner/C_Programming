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
		j = 0; //�ʱ�ȭ!!!!!!!1
		printf(" *\n");
		i++; //�ݺ��� ��������!!
	}
	return 0;
}