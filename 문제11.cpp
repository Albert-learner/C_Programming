#include <stdio.h>

int main()
{
	int n;
	int fac = 1;
	printf("���� �Է�: ");
	scanf("%d", &n);

	for (int i = 1; i < n + 1; i++)
	{
		fac *= i;
	}
	printf("��� ���� ��: %d\n", fac);
	return 0;
}