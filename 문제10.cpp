#include <stdio.h>

int main(void)
{
	int i, j;
	int sum = 0;
	printf("�� ���� �Է�: ");
	scanf("%d %d", &i, &j);

	for (int k = i; k < j+1; k++)
	{
		sum += k;
	}
	printf("�հ�: %d\n", sum);
	return 0;
}