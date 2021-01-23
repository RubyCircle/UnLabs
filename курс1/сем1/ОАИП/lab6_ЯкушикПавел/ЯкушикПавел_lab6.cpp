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
			for (int j = 0; j < i * 2; j++)
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

		std::cout << "Номер подъезда: " << num / (9 * 4) + 1 << std::endl;
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

		std::cout << "Ответ: " << result << " часов работала бригада" << std::endl;
	}
void foo1()
{
	float b, z, s = 1.1, x = -4e-3;

	for (float j = 4; j < 7; j+= 0.5)
	{
		b = 12 * s - exp(-x / 2) * (x - j);

		if (b < 1.5)
		{
			z = sqrt(-2 * x * j) + b;
		}
		else
		{
			z = abs(13 * x * j) + b;
		}
		std::cout << "z = " << z << std::endl;
	}
}

// Даны натуральные числа q и b. Используя перебор значений получить 
// все меньшие q натуральные числа, квадрат суммы цифр которых равен b.
void foo2()
{
	int b, q;

	std::cout << "Введите b: ";
	std::cin >> b;
	std::cout << std::endl;

	for (int q = 0; q < 1000; q++)
	{
		int n, sum;
		n = q;
		sum = 0;
		while (n>0)
		{
			sum += n % 10;
			n /= 10;
		}

		if ((pow(sum, 2)) == b)
		{
			std::cout << q << std::endl;
		}
	}
}

// Имеются два  сосуда.  В первом сосуде находится C1 литров воды,  во втором –  C2 литров воды. 
// Из первого со-суда переливают половину воды во второй  сосуд,  затем из второго переливают половину в первый сосуд,  
// и так далее. Сколько воды окажется в обоих сосудах после 12 переливаний?
void dop1()
{
	float c1, c2;

	std::cout << "в первом сосуде(литров) ";
	std::cin >> c1;
	std::cout << std::endl;

	std::cout << "во втором сосуде(литров) ";
	std::cin >> c2;
	std::cout << std::endl;

	for (int i = 0; i < 12/2; i++)
	{
		c2 += c1 / 2;
		c1 /= 2;

		c1 += c2 / 2;
		c2 /= 2;
	}

	std::cout << "в  первом сосуде будет(литров) " << c1 << std::endl;

	std::cout << "во втором сосуде будет(литров) " << c2 << std::endl;
}

// Три приятеля были свидетелями нарушения правил дорожного движения. Номер автомобиля – четырехзначное число – никто полностью не запомнил. Из показаний следует, что номер делится на 2, на 7 и на 11, 
// в записи номе-ра участвуют только две цифры, сумма цифр номера равна 30.  Составить алгоритм и программу для определе-ния номера автомашины.
void dop2()
{
	for (int i = 0; i < 10000; i++)
	{
		if (i % 2 == 0 && i % 7 == 0 && i % 11 == 0)
		{
			int n, sum;
			n = i;
			sum = 0;
			while (n > 0)
			{
				sum += n % 10;
				n /= 10;
			}
			if (sum == 30)
			{
				std::cout << i << std::endl;
				break;
			}
		}
	}
}

//Известно, что 1 января 2016 г. – пятница. Программа должна найти все «черные вторники» и «черные пятницы» 2016 и 2017 года (то есть – 13 числа).
void dop3()
{
	int day_num = 5, vt = 0, pt = 0;
	for (int i = 0; i < 30*12; i++)
	{
		day_num = (day_num + i) % 8;
		if (i % 30 == 13)
		{
			if (day_num == 5)
			{
				pt++;
			}
			else if (day_num == 2)
			{
				vt++;
			}
		}
	}
	std::cout << "черные вторников будет " << vt << std::endl;
	std::cout << "черные пятниц будет " << pt << std::endl;
}

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	dop2();
}
