#include<stdio.h>
void Print_message()
{
	printf("Input data!\n");
}

int Max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
	//int z;
	//z = x > y ? x : y;
	//return z;
}

int main()
{
	Print_message();

	int a, b, max;
	printf("����Ҫ�Ƚϴ�С��������");
	scanf_s("%d%d", &a, &b);
	max = Max(a, b);
	printf("max = %d", max);

	return 0;
}