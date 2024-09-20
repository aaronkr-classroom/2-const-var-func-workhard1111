#include <stdio.h>
#include <math.h> // M_PI�� ���⿡ �־�� ������ ������ ���� ������ �� ����
#include "calc.h" // �츮 ���� .h������ include�� �� 
                  // ū ����ǥ�� ����ؾ��Ѵ�.


int main(void)
{
	double x = -3, y = 3;
		

	printf("x: %.1f + y: %.1f = %.1f\n", x, y, sum(x, y));

	printf("x: %.1f - y: %.1f = %.1f\n", x, y, sub(x, y));

	printf("x: %.1f * y: %.1f = %.1f\n", x, y, mul(x, y));

	printf("x: %.1f / y: %.1f = %.6f\n", x, y, div(x, y));

	printf("x: %d %% y: %d = %d\n", (int)x, (int)y, rem((int)x, (int)y));

	// �߰� �κ�
	printf("x: %.1f ^ y: %.1f = %.1f", power(x, y));
	printf("sqrt of x: %.1f = %.1f", x, squareRoot(x));
	printf("area of x:.1f = %.1f", x, area0fCircle(x));
	printf("circ of x: %.1f = %.1f", x, circumference0fCircle(x));

	return 0;
}

//���ϱ�
double sum(double value1, double value2)
{
	return value1 + value2;
}

// ����(sub())
double sub(double value1, double value2)
{
	return value1 - value2;
}

// ���ϱ�
double  mul(double value1, double value2)
{
	return value1 * value2;
}

// ������
double div(double value1, double value2)
{
	if (value2 != 0)
		return value1 / value2;
	else
	{
		printf("Error: Divide by 0!");
		return 0;
	}

}

// ������
int rem(int value1, int value2)
{
	if (value2 != 0)
		return value1 % value2;
	else
	{
		printf("Error: Divide by 0!");
		return 0;
	}
}

//����
double power(double base, double exponent)
{
	return pow(base, exponent);
}

//������
double squareRoot(double num)
{
	if (num >= 0)
		return sqrt(num); //math.h���� �ִ� sqrt()�Լ�
	else
	{
		printf("Error: Negative number!");
		return 1;
	}
}

//�κ�
double area0fCircle(double radius)
{
	return M_PI * radius * radius; //M_PI �����ؾ���
}

//�ѷ�
double circumference0fCircle(double radius)
{
	return 2 * M_PI * radius;
}