#include <stdio.h>

int main()
{
	int total = 0, num;

	printf("���� �Է�: ");
	scanf("%d", &num);
	total += num; // ��������� ���� ������!!!!!!!

	while (num != 0)
	{
		printf("���� �Է�: ");
		scanf("%d", &num);
		total += num;
	}
	printf("�հ�: %d\n", total);
	return 0;
}