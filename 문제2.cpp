#include <stdio.h>
#include <cstdlib>

int main(void)
{
	int n1, n2;
	printf("정수 입력: ");
	scanf("%d %d", &n1, &n2);

	if (n1 > n2)
		printf("두 수의 차: %d\n", n1 - n2);
	else if (n2 > n1)
		printf("두수의 차: %d\n", n2 - n1);
	else
		exit(1);
	return 0;
}