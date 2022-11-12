#include <stdio.h>
#include <locale.h>

int main(void)
{
	double x;
	setlocale(LC_ALL, "");
	printf("Введите значение с плавающей запятой:");
	scanf_s("%lf", &x);
	printf("\nЗапись с фиксированной запятой:%lf\n", x);
	printf("Экспоненциальная форма записи:%e\n", x);
	printf("двоично-экспоненциальное представление:%a\n",x);
	
	return 0;

}