#include <stdio.h>

int main()
{
	int total = 0, num = 0;

	do 
	{
		printf("���� �Է�: ");
		scanf("%d", &num); 
		total += num;
	} while (num != 0);
	
	printf("�հ�: %d\n", total);
	return 0;
}