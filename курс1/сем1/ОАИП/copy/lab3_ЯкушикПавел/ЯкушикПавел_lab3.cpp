#include <iostream>
#include <windows.h>

// 1. Нарисовать домик, закрашенный введенным символом.
void foo1()
{
	char symbol;
	int length = 8;

	std::cout << "Введите символ: ";
	std::cin >> symbol;
	std::cout << std::endl;

	for (int i = 0; i < length; i++)
	{
		for (int j = 0; j < length - i; j++)
			std::cout << ' ';
		for (int j = 0; j < i*2; j++)
			std::cout << symbol;
		std::cout << std::endl;
	}
	for (int i = 0; i < length; i++)
	{
		for (int j = 0; j < length * 2; j++)
			std::cout << symbol;
		std::cout << std::endl;
	}
}

// 2. Определить номера подъезда и этажа по номеру квартиры девятиэтажного дома, считая, что на каждом этаже ровно 4 квартиры, а 
// нумерация квартир начинается с первого подъезда. 
void foo2()
{
	int num;
	std::cout << "Введите номер квартиры: ";
	std::cin >> num;
	std::cout << std::endl;

	std::cout << "Номер подъезда: " << num / (9 * 4)+1 << std::endl;
	std::cout << "Номер этажа: " << (num / 4) % 9 << std::endl;
}

// 3. Нарисовать квадрат, закрашенный введенным символом. 
void foo3()
{
	char symbol;
	int length = 8;

	std::cout << "Введите символ: ";
	std::cin >> symbol;
	std::cout << std::endl;

	for (int i = 0; i < length; i++)
	{
		for (int j = 0; j < length * 4; j++)
			std::cout << symbol;
		std::cout << std::endl;
	}
}

// 4. Нарисовать квадрат, закрашенный введенным символом.
void foo4()
{
	char symbol;
	int length = 8;

	std::cout << "Введите символ: ";
	std::cin >> symbol;
	std::cout << std::endl;

	for (int i = 0; i < length; i++)
	{
		for (int j = 0; j < length * 4; j++)
			std::cout << symbol;
		std::cout << std::endl;
	}
}

// 5. В компьютерной игре игрок выигрывает 50 очков, если он сбивает самолет; 100 очков, если он сбивает ракету; 
// 200 очков, если он сбивает спутник. Определить число очков игрока, который сбил А самолетов, В ракет и С спутников. 
void foo5()
{
	int CountA, CountB, CountC;

	std::cout << "Введите количество самолетов: ";
	std::cin >> CountA;
	std::cout << std::endl;

	std::cout << "Введите количество ракет: ";
	std::cin >> CountB;
	std::cout << std::endl;

	std::cout << "Введите количество спутников: ";
	std::cin >> CountC;
	std::cout << std::endl;

	std::cout << "Очков: " << CountA * 50 + CountB * 100 + CountC * 200 << std::endl;
}

// 6. В бригаде, работающей на уборке сена, имеется N косилок. Первая из них работала M часов, 
// а каждая следующая на 10 мин. Больше, чем предыдущая. Сколько часов работала вся бригада? 
void foo6()
{
	int N, M, result = 0;

	std::cout << "Введите количество косилок: ";
	std::cin >> N;
	std::cout << std::endl;

	std::cout << "Введите количество часов: ";
	std::cin >> M;
	std::cout << std::endl;

	for (int i = 0; i < N; i++)
	{
		result += M + 10 * N;
	}

	std::cout << "Ответ: " << result << " часов работала бригада" <<std::endl;
}

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	foo6();
}
