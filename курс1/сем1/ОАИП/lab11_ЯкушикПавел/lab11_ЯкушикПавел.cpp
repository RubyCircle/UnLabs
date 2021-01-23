#include <iostream>
#include <Windows.h>

void foo1()
{
	const unsigned SIZE = 5;

	int arr[SIZE] = { 2,-4,1,-5,8 };

	int* LastPos = nullptr;

	for (int i = 0; i < SIZE; i++)
	{
		if (*(arr + i) < 0 && LastPos != nullptr)
		{
			int temp = *LastPos;
			*LastPos = *(arr + i);
			*(arr + i) = temp;

			LastPos = (arr + i);
		}
		else
		{
			if (LastPos == nullptr)
				LastPos = (arr + i);
		}
	}
	for (int i = 0; i < SIZE; i++)
	{
		std::cout << *(arr + i) << ' ';
	}
	std::cout << std::endl;
}

// Дан массив x, содержащий k элементов, массив y, содержащий n элементов, и число q.Найти сумму вида
// x[i] + y[j], наиболее близкую к числу q.
void foo2()
{
	const unsigned SIZE = 5;

	int arrX[SIZE] = { 2,-4,1,-5,8 };
	int arrY[SIZE] = { 1,-2,-6,3,-1 };

	int q = 4;

	int min = INT_MAX;
	int* itemX = nullptr;
	int* itemY = nullptr;

	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			if (abs(((*(arrX + i) + *(arrY + j)))) - q < abs(min) - q)
			{
				itemX = (arrX + i);
				itemY = (arrY + j);
				min = (*(arrX + i) + *(arrY + j)) - q;
			}
		}
	}
	std::cout << min + q << std::endl;
	std::cout << *itemX << " + " << *itemY << std::endl;
}

// Даны массивы A и B, состоящие из n элементов. Построить массив S, каждый элемент которого равен сумме соответствующих элементов массивов A и B.
void dop1()
{
	const unsigned SIZE = 5;
	int A[SIZE] = { 2,-4,1,-5,8 };
	int B[SIZE] = { 1,-2,-6,3,-1 };

	int S[SIZE] = { 0 };

	for (int i = 0; i < SIZE; i++)
	{
		(*(S + i)) = (*(A + i)) + (*(B + i));
	}

	for (int i = 0; i < SIZE; i++)
	{
		std::cout << *(A + i) << ' ';
	}
	std::cout << std::endl;
}

// Заданы два массива А(n) и В(n). Подсчитать в них количество элементов, меньших значения t, и первым на печать вывести массив, имеющий наибольшее их количество.
void dop2()
{
	const unsigned SIZE = 5;
	int A[SIZE] = { 2,-4,1,-5,8 };
	int B[SIZE] = { 1,-2,-6,3,-1 };
	int t = 4;

	int Acount = 0, Bcount = 0;

	for (int i = 0; i < SIZE; i++)
	{
		if ((*(A + i)) < t)
		{
			Acount++;
		}
		if ((*(B + i)) < t)
		{
			Bcount++;
		}
	}

	if (Acount > Bcount)
	{
		for (int i = 0; i < SIZE; i++)
			std::cout << *(A + i) << ' ';
		for (int i = 0; i < SIZE; i++)
			std::cout << *(B + i) << ' ';
	}
	else
	{
		for (int i = 0; i < SIZE; i++)
			std::cout << *(B + i) << ' ';
		for (int i = 0; i < SIZE; i++)
			std::cout << *(A + i) << ' ';
	}

	std::cout << std::endl;
}

// Заданы два массива по 10 целых чисел в каждом.Найти наименьшее среди чисел первого массива,
// которое не входит во второй массив(считая, что хотя бы одно такое число есть).
void dop3()
{
	const unsigned SIZE = 10;
	int A[SIZE] = { 2,-4,1,-5,8,1,6,2,3,4 };
	int B[SIZE] = { 1,-2,-6,3,-1,7,1,2,-5,3 };

	int* min = nullptr;

	for (int i = 0; i < SIZE; i++)
	{
		if (min == nullptr || *(A + i) < *min)
		{
			min = (A + i);
			for (int j = 0; j < SIZE; j++)
			{
				if (*(B + j) == *min)
				{
					min = nullptr;
					break;
				}
			}
		}
	}
	if (min != nullptr)
		std::cout << *min << std::endl;
	else
		std::cout << "Не существует" << std::endl;
}

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	dop3();
}