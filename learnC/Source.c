#include <stdio.h>
#include <locale.h>

int main(void)
{
	double x;
	setlocale(LC_ALL, "");
	printf("������� �������� � ��������� �������:");
	scanf_s("%lf", &x);
	printf("\n������ � ������������� �������:%lf\n", x);
	printf("���������������� ����� ������:%e\n", x);
	printf("�������-���������������� �������������:%a\n",x);
	
	return 0;

}