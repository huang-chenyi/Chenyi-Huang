#include <stdio.h>
int main()
{
	int c = 15, h = 20;
	//��һ�ַ���
	float s;

	s = 1.0 / 2 * c * h;

	printf("���=%f", s);
	//��һ�ַ�������
	printf("���=%f", 1.0 / 2 * c * h);

	return 0;

}