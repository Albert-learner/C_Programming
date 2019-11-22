#include <stdio.h>

int main(void)
{
	int kor, eng, math;
	double avg;
	printf("국어, 영어, 수학 성적 입력: ");
	scanf("%d %d %d", &kor, &eng, &math);
	avg = (kor + eng + math) / 3.0;
	printf("평균: %f\n", avg);

	if (avg >= 90)
		printf("A\n");
	else if (avg >= 80)
		printf("B\n");
	else if (avg >= 70)
		printf("C\n");
	else if (avg >= 50)
		printf("D\n");
	else
		printf("F\n");
	return 0;
}