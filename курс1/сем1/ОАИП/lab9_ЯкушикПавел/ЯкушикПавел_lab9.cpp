#include <iostream>
#include <windows.h>


namespace lab9
{
	// Удалить элементы, индексы которых кратны 3. Добавить после каждого отрицательного элемента массива элемент со значением 10.
	void foo1()
	{
		int* arr;
		int length;

		std::cout << "Введите размер: " << std::endl;
		std::cin >> length;

		arr = new int[length];

		bool lastNeg = false;
		for (int i = 0; i < length; i++)
		{
			arr[i] = rand() % 100;


			if (i % 3 == 0)
				arr[i] = 0;

			if (lastNeg)
			{
				arr[i] = 10;
				lastNeg = false;
			}

			else if (arr[i] < 0)
				lastNeg = true;
		}
		for (int i = 0; i < length; i++)
		{
			std::cout << arr[i] << ' ';
		}
		std::cout << std::endl;

		delete[] arr;
	}


	// Удалить элемент с номером k. Добавить после каждого четного элемента массива элемент со значением 0.
	void foo2()
	{
		int* arr;
		int length, k;

		std::cout << "Введите размер: " << std::endl;
		std::cin >> length;

		std::cout << "Введите k: " << std::endl;
		std::cin >> k;

		arr = new int[length];

		bool last = false;
		for (int i = 0; i < length; i++)
		{
			arr[i] = rand() % 100;


			if (last)
			{
				arr[i] = 0;
				last = false;
			}
			else if (arr[i] % 2 == 0)
				last = true;
		}
		arr[k] = 0;

		for (int i = 0; i < length; i++)
		{
			std::cout << arr[i] <<' ';
		}
		std::cout << std::endl;

		delete[] arr;
	}

	/*
	Имеются результаты n ежедневных измерений количества выпавших осадков. 
	За какую из недель (отрезок времени длиной 7 дней), 
	считая с начала периода измерений, выпало наибольшее количество осадков?
	*/
	void dop1()
	{
		const int SIZE = 7 * 2;
		int arr[SIZE]{ 120,90,230,639,373,372,254,387,195,286,490,849,298,383 };

		int maxW = 0, max = 0;
		for (int i = 0; i < SIZE; i++)
		{
			if (arr[i] > maxW)
			{
				maxW = arr[i];
				max = i / 7 + 1;
			}
		}
		std::cout << "Наибольшее количество осадков было в " << max << " неделе" << std::endl;
	}

	/*	
	Переставить в обратном порядке элементы массива, 
	расположенные между его минимальным и максимальным элементами.
	*/
	void dop2()
	{
		const int SIZE = 7 * 2;
		int arr[SIZE]{ 120,90,230,639,373,372,254,387,195,286,490,849,298,383 };

		int min = INT_MAX, max = 0;
		int minIndex = 0, maxIndex = 0;
		for (int i = 0; i < SIZE; i++)
		{
			if (arr[i] < min)
			{
				min = arr[i];
				minIndex = i;
			}
			if (arr[i] > max)
			{
				max = arr[i];
				maxIndex = i;
			}
		}
		for (int i = minIndex; i < maxIndex; i++)
		{
			int temp = arr[i];
			arr[i] = arr[maxIndex - i];
			arr[maxIndex - i] = temp;
		}
		for (int i = 0; i < SIZE; i++)
		{
			std::cout << arr[i] << ' ';
		}
		std::cout << std::endl;
	}

	// Подсчитать количество пар соседних элементов массива с одинаковыми значениями.
	void dop3()
	{
		const int SIZE = 7 * 2;
		int arr[SIZE]{ 120,90,230,230,373,372,254,254,286,286,298,298,298,383 };

		int last = -1, count = 0;
		for (int i = 0; i < SIZE; i++)
		{
			if (arr[i] == last)
			{
				count++;
			}
			last = arr[i];
		}
		std::cout << count << std::endl;
	}
}
int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	////lab8::foo1();
	////lab8::foo2();
	/*std::cout << "dop1" << std::endl;
	lab8::dop1();

	std::cout << std::endl << "dop2" << std::endl;
	lab8::dop2();*/


	lab9::foo1();
	lab9::foo2();

	lab9::dop1();
	lab9::dop2();
	lab9::dop3();
}