#include <stdio.h>

int main()
{
	int total = 0, num = 0;

	do 
	{
		printf("정수 입력: ");
		scanf("%d", &num); 
		total += num;
	} while (num != 0);
	
	printf("합계: %d\n", total);
	return 0;
}