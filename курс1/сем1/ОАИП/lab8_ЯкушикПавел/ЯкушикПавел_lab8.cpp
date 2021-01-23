#include <iostream>
#include <windows.h>

// 1. Ввод a, b, n.
// 2. Вычисление h = (b - a) / n, x = a, s = 0.
// 3. Расчет s = s + h *(f(x) + f(x + h)) / 2, x = x + h.
// 4. Если x > (b – h), то переход к пункту 5, иначе – переход к пункту 3.
// 5. Вывод z.
float trapezoid(float a, float b, float n, float(f(float x)))
{
	float h = (b - a) / n;
	float x = a, s = 0.f;

	do
	{			
		s += h * (f(x) + f(x + h)) / 2.f;
		x += h;
	} while (x < (b - h));
	return s;
}

// 1. Ввод a, b, n.
// 2. Вычисление h = (b - a) / (2*n), x = a + 2h, s1 = 0, s2 = 0, i = 1.
// 3. Расчет s2 = s2 + f(x), x = x + h, s1 = s1 + f(x), x = x + h, i = i + 1.
// 4. Если i < n, то переход к пункту 3, иначе – переход к следующему пункту.
// 5. Вычисление значения интеграла
float parabola(float a, float b, float n, float(f(float x)))
{
	float h = (b - a) / (2.f * n);
	float x = a + 2*h, s1 = 0.f, s2 = 0.f, i = 1;

	do
	{
		s2 = s2 + f(x);
		x += h;
		s1 += f(x);
		x += h;
		i++;
	} while (i < n);
	return (h / 3.f)*(f(a) + 4 * f(a + h) + 4 * s1 + 2 * s2 + f(b));
}

// sin2(x) + 1
float f1(float x)
{
	return pow(sin(x), 2) + 1.0f;
}
void foo1()
{
	std::cout << "методом трапеции: " << trapezoid(2, 7, 200.f, f1) << std::endl;
	std::cout << "методом пораболы: " << parabola(2, 7, 200.f, f1) << std::endl;
}




// 1. Ввод значений a, b, e.
// 2. Вычисление начального приближения корня x1 = a, если f(a)f`(a) > 0 или x1 = b в противном случае.
// 3. Вычисление x = x1.
// 4. Определение очередного приближения корня по формуле x1 = x – f(a) / f`(a)
// 5. Если |x1 – x| > e, то переход к пункту 3, в противном случае – переход к пункту 6.
// 6. Вывод значения корня x1.
float tangent(float a, float b, float e, float(f(float x)), float(fp(float x)))
{
	float x1;
	(f(a) * fp(a) > 0) ? x1 = a : x1 = b;

	float x;
	do 
	{
		x = x1;
		x1 = x - (f(x) / fp(x));

	} while (abs(x1 - x) > e);

	return x1;
}

// 1. Ввод значений a, b, e.
// 2. Вычисление x = (a + b) / 2.
// 3. Если f(x)f(a) <= 0, то b = x, иначе – a = x.
// 4. Если |a – b| > 2e, то переход к пункту 2, иначе – переход к следующему пункту.
// 5. Вывод значения корня x.
float dichotes(float a, float b, float e, float(f(float x)))
{
	float x;
	do
	{
		x = (a + b) / 2.f;

		(f(x) * f(a) <= 0) ? b = x : a = x;

	} while (abs(a - b) > 2.f*e);
	return x;
}

//sin(x) + 2 + x
float f2(float x)
{
	return sin(x) + 2 + x;
}
float fp2(float x)
{
	return cos(x) + 1;
}
void foo2()
{
	std::cout << "методом касательных: " << tangent(2, 7, 0.0001f, f2, fp2) << std::endl;
	std::cout << "методом дихотомии: " << dichotes(2, 7, 0.0001f, f2) << std::endl;
}


float d1(float x)
{
	return pow(x,3) - 3;
}
float d1_1(float x)
{
	return pow(x, 3) + x - 2;
}
float d1_1p(float x)
{
	return 3 * pow(x, 2) + 1;
}
void dop1()
{
	float a = 1, b = 3;
	std::cout << "методом трапеции: " << trapezoid(a, b, 200.f, d1) << std::endl;
	std::cout << "методом пораболы: " << parabola(a, b, 200.f, d1) << std::endl;
	std::cout << "методом касательных: " << tangent(a, b, 0.0001f, d1_1, d1_1p) << std::endl;
	std::cout << "методом дихотомии: " << dichotes(a, b, 0.0001f, d1_1) << std::endl;
}

float d2(float x)
{
	return 5 - pow(x, 2);
}
float d2_1(float x)
{
	return 2 - pow(x, 2) + x;
}
float d2_1p(float x)
{
	return -2 * x + 1;
}
void dop2()
{
	float a = 8, b = 12;
	std::cout << "методом трапеции: "	<< trapezoid(a, b, 200.f, d2) << std::endl;
	std::cout << "методом пораболы: "	<< parabola(a, b, 200.f, d2) << std::endl;
	std::cout << "методом касательных: "<< tangent(a, b, 0.0001f, d2_1, d2_1p) << std::endl;
	std::cout << "методом дихотомии: "	<< dichotes(a, b, 0.0001f, d2_1) << std::endl;
}


int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	//foo1();
	//foo2();
	std::cout << "dop1" << std::endl;
	dop1();

	std::cout << std::endl << "dop2" << std::endl;
	dop2();
}