#include <stdio.h>
#include <cstdlib>

int main(void)
{
	int n1, n2;
	printf("���� �Է�: ");
	scanf("%d %d", &n1, &n2);

	if (n1 > n2)
		printf("�� ���� ��: %d\n", n1 - n2);
	else if (n2 > n1)
		printf("�μ��� ��: %d\n", n2 - n1);
	else
		exit(1);
	return 0;
}