#include <iostream>
#include <Windows.h>

// Используя битовые операции проверить, кратно ли двум число А.
void foo1()
{
	unsigned a;

	std::cout << "Введите число a";
	std::cin >> a;
	std::cout << std::endl;

	if (!(a & 0x01u))
	{
		std::cout << "Кратно" << std::endl;
	}
}

void PrintBits(unsigned num)
{
	for (int i = sizeof(int) * 8 - 1; i >= 0; --i)
		std::cout << ((num >> i) & 1);
	std::cout << std::endl;
}

// Установить в 0 в числе А n битов влево от позиции p.
void foo2()
{
	unsigned A, n, p;

	std::cout << "Введите число A ";
	std::cin >> A;
	std::cout << std::endl;

	std::cout << "Введите количество битов ";
	std::cin >> n;
	std::cout << std::endl;

	std::cout << "Введите позицию ";
	std::cin >> p;
	std::cout << std::endl;

	std::cout << "A: \t";
	PrintBits(A);

	unsigned mask = (1u << n) - 1; 
	mask <<= p;

	std::cout << "mask: \t";
	PrintBits(mask);

	A = A & (~mask);

	std::cout << "res: \t";
	PrintBits(A);
}

// Ввести целое число A.Извлечь 3 бита числа A, начиная со второго и вставить их в число B, начиная с
// первого бита.
void foo3()
{
	unsigned A,B;

	std::cout << "Введите число A ";
	std::cin >> A;
	std::cout << std::endl;

	std::cout << "Введите число B ";
	std::cin >> B;
	std::cout << std::endl;

	std::cout << "A: \t";
	PrintBits(A);
	std::cout << "B: \t";
	PrintBits(B);

	unsigned maskA = (1u << 3) - 1;
	maskA <<= 2;

	unsigned maskB = (1u << 3) - 1;
	maskB <<= 1;

	std::cout << "res: \t" << (B | (A & maskA >> 2));

	std::cout << "res: \t";
	PrintBits(A);
}

// Установить в 1 2 бита числа А, начиная с четвертого
void foo4()
{
	unsigned A;

	std::cout << "Введите число A ";
	std::cin >> A;
	std::cout << std::endl;

	std::cout << "A: \t";
	PrintBits(A);

	unsigned mask = (1u << 2) - 1;
	mask <<= 4;

	A = A | mask;

	std::cout << "res: \t";
	PrintBits(A);
}

// Ввести целое число A.Инвертировать все биты с 4 по 8, включая эти биты.Вывести полученное число.
void dop1()
{
	unsigned A;

	std::cout << "Введите число A ";
	std::cin >> A;
	std::cout << std::endl;

	std::cout << "A: \t";
	PrintBits(A);

	unsigned mask = (1u << 3) - 1;
	mask <<= 7;

	A = A ^ mask;

	std::cout << "res: \t";
	PrintBits(A);
}

// Ввести целое число A и посчитать, сколько единиц в числе с 5 по 10 бит, включая эти биты.
void dop2()
{
	unsigned A, count = 0;

	std::cout << "Введите число A ";
	std::cin >> A;
	std::cout << std::endl;
	PrintBits(A);
	std::cout << std::endl;

	for (unsigned i = 5; i < 10; i++)
	{
		if (((A >> i) & 1u )== 1u)
		{
			++count;
		}
	}

	std::cout << "count: \t" << count << std::endl;

}

// Вывести 6 бит целого числа А, начиная со 2-ого.
void dop3()
{
	unsigned A;

	std::cout << "Введите число A ";
	std::cin >> A;
	std::cout << std::endl;

	for (unsigned i = 0; i < 6; i++)
	{
		std::cout << ((((A >> (2 + i)) & 1) == 1) ? 1 : 0);
	}
	std::cout << std::endl;
}

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	dop3();
}