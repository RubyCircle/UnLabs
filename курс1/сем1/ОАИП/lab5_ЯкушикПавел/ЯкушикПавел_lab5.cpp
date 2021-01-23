#include <iostream>

void foo1()
{
	int a = -1;
	float y = 0.4, z, w, d, t = 5e-5;


	std::cout << "for" << std::endl;
	for (int n = 0; n < 6; n++)
	{
		float j;
		std::cout << "j=";
		std::cin >> j;
		z = sqrt(t * a + y) + 4 * exp(-2 * j);
		w = log(0.4 * y) / (7.0 * a - z);
		std::cout << "z = " << z << std::endl;
		std::cout << "w = " << w << std::endl << std::endl;
	}
}

void foo2()
{
	std::cout << "while" << std::endl;
	int a = -1;
	float y = 0.4, z, w, d, t = 5e-5;

	float j = 1.0f;
	while (j <= 2)
	{
		z = sqrt(t * a + y) + 4 * exp(-2 * j);
		w = log(0.4 * y) / (7.0 * a - z);
		std::cout << "z = " << z << std::endl;
		std::cout << "w = " << w << std::endl << std::endl;
		j += 0.1f;
	}
}

void foo3()
{
	std::cout << "2 fors" << std::endl;
	float y = 0.4, z, a, w, d, t = 5e-5;

	for (t = 3.0f; t < 4.0f; t+=0.2f)
	{
		for (int j = 0; j < 4; j++)
		{
			std::cout << "t="<<t<<std::endl;
			std::cout << "a=";
			std::cin >> a;
			z = sqrt(t * a + y) + 4 * exp(-2 * j);
			w = log(0.4 * y) / (7.0 * a - z);
			std::cout << "z = " << z << std::endl;
			std::cout << "w = " << w << std::endl << std::endl;
		}
	}
}

// 6
void dop1()
{
	setlocale(LC_ALL, "Russian");
	int k, result = 1;
	std::cout << "Введите k: ";
	std::cin >> k;
	std::cout << std::endl;

	for (int i = 1; i < k; i++)
		result *= 2;

	std::cout << "Ответ: " << result << std::endl;
}

// 4
void dop2()
{
	setlocale(LC_ALL, "Russian");
	int price, years, markdown, result = 1;

	std::cout << "Введите количество лет: ";
	std::cin >> years;
	std::cout << std::endl;

	std::cout << "Введите ученку(%): ";
	std::cin >> markdown;
	std::cout << std::endl << std::endl;


	for (int i = 0; i <= years; i++)
	{
		std::cout << "Введите цену оборудования в " << i << " году: ";
		std::cin >> price;
		std::cout << std::endl;

		result = (price + result) - (price + result) * (markdown / 100);
	}
	std::cout << "Итоговая цена всего оборудования: " << result << std::endl;
}

// 
void dop3()
{
	setlocale(LC_ALL, "Russian");

	float q, p, days = 1;

	std::cout << "Начальный доход " << std::endl;
	std::cin >> p;

	std::cout << "Конечный доход " << std::endl;
	std::cin >> q;

	while (p < q)
	{
		p += p * 0.03;
		days++;
	}
	std::cout << "Итоговая выручка " << p << std::endl;
	std::cout << "за " << days << " дня" << std::endl;
}

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	dop3();
}