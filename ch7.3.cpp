#include <stdio.h>

int main()
{
	int cur = 2;
	int is = 0;

	while (cur < 10)// 2�ܺ��� 9�ܱ��� �ݺ�
	{
		is = 1; //���ο� ���� ������ ���ؼ�
		while (is < 10) //�� ���� 1���� 9�� ���� ǥ��
		{
			printf("%d * %d = %d\n", cur, is, cur*is);
			is++;
		}
		cur++; //���� ������ �Ѿ�� ���� ����
	}
	return 0;
}