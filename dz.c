#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "RUS");
	double a;
	double znach = 0;
	int n;

	printf("Введите a и n: ");
	scanf("%lf %d", &a, &n);

	for (int i = 1; i <= 2 * n; i++) {
		znach += 1.0 / pow(a, i);
	}
	printf("Значение ряда = %.6f\n", znach);
}