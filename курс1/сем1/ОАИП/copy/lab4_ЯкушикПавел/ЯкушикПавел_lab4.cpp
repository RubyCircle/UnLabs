#include <iostream>

// Определить есть ли среди заданных целых чисел A, B, C, D хотя бы одно чётное.
void foo1()
{
	setlocale(LC_CTYPE, "Russian");

	int A, B, C, D;

	std::cout << "A: ";
	std::cin >> A;
	std::cout << "B: ";
	std::cin >> B;
	std::cout << "C: ";
	std::cin >> C;
	std::cout << "D: ";
	std::cin >> D;
	std::cout << std::endl;

	if (A % 2 == 0)
		std::cout << "A - четное" << std::endl;
	if (B % 2 == 0)
		std::cout << "B - четное" << std::endl;
	if (C % 2 == 0)
		std::cout << "C - четное" << std::endl;
	if (D % 2 == 0)
		std::cout << "D - четное" << std::endl;
}

void foo2()
{
	setlocale(LC_CTYPE, "Russian");

	int num;
	std::cout << "Что ты любишь" << std::endl << "1-Фрукты, 2-Овощи, 3-Мясо" << std::endl;
	std::cin >> num;
	std::cout << std::endl;

	switch (num)
	{
	case 1:
		std::cout << "Хорошо" << std::endl;
		break;
	case 2:
		std::cout << "Неплохо" << std::endl;
		break;
	case 3:
		std::cout << "Нормально" << std::endl;
		break;
	}
}

// Можно ли коробку размером a*b*c упаковать в посылку размером r*s*t? «Углом» укладывать нель-зя.
void foo3()
{
	setlocale(LC_CTYPE, "Russian");
	int a, b, c, r, s, t;
	std::cout << "a: ";
	std::cin >> a;
	std::cout << "b: ";
	std::cin >> b;
	std::cout << "c: ";
	std::cin >> c;
	std::cout << "r: ";
	std::cin >> r;
	std::cout << "s: ";
	std::cin >> s;
	std::cout << "t: ";
	std::cin >> t;
	std::cout << std::endl;
	if (a * b * c > r * s * t)
		std::cout << "Можно" << std::endl;
	else
		std::cout << "Нельзя" << std::endl;
}

// Может ли шар радиуса r пройти через ромбообразное отверстие с диагоналями p и q?
void foo4()
{
	setlocale(LC_CTYPE, "Russian");

	int r, p, q, r2;

	std::cout << "r: ";
	std::cin >> r;
	std::cout << "p: ";
	std::cin >> p;
	std::cout << "q: ";
	std::cin >> q;
	std::cout << std::endl;

	r2 = p * q / (2 * std::sqrt(std::pow(p, 2) + std::pow(q, 2)));
	if (r2 >= r)
		std::cout << "Можно" << std::endl;
	else
		std::cout << "Нельзя" << std::endl;
}

// Можно ли на прямоугольном участке застройки размером а на b метров разместить два дома размером в плане р на q и r на s метров? 
// Дома можно располагать только параллельно сторонам участка. 
void foo5()
{
	setlocale(LC_CTYPE, "Russian");

	int a, b, p, q, r, s;

	std::cout << "a: ";
	std::cin >> a;
	std::cout << "b: ";
	std::cin >> b;
	std::cout << "p: ";
	std::cin >> p;
	std::cout << "q: ";
	std::cin >> q;
	std::cout << "r: ";
	std::cin >> r;
	std::cout << "s: ";
	std::cin >> s;
	std::cout << std::endl;

	if (a*b >= p*q+r*s)
		std::cout << "Можно" << std::endl;
	else
		std::cout << "Нельзя" << std::endl;
}

int main()
{
	foo5();
}