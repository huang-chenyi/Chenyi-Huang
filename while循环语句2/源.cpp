#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i=1;
	double score, sum = 0;

	while (i <= 4)
	{
		printf("���������:\n");

		scanf("%lf", &score);

		sum = sum + score;

		i++;
	}
	printf("ƽ���ɼ�=%f\n", sum /4);

	return 0;
}
