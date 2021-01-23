#include <iostream>
#include <Windows.h>

// В заданном массиве A(N, N) вычислить две суммы элементов, расположенных выше и ниже главной диагонали.
void foo1()
{
	const int SIZE = 5;
	int arr[SIZE][SIZE];
	for (int i = 0; i < SIZE; i++)
		for (int j = 0; j < SIZE; j++)
			arr[i][j] = rand() % 11;
	
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			std::cout << arr[i][j] << ' ';
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;

	int sum1 = 0;
	int sum2 = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum1 += arr[i][SIZE / 2];
		sum2 += arr[i][SIZE / 2 + 2];
	}
	std::cout << "sum1 " << sum1 << std::endl;
	std::cout << "sum2 " << sum2 << std::endl;
}

// Найти наибольший элемент матрицы A(N, M), а также номера строки и столбца, на пересечении которых он находится.
void foo2()
{
	const int WIDTH = 5;
	const int HEIGHT = 2;
	int arr[WIDTH][HEIGHT];

	for (int i = 0; i < WIDTH; i++)
		for (int j = 0; j < HEIGHT; j++)
			arr[i][j] = rand() % 11;

	for (int i = 0; i < WIDTH; i++)
	{
		for (int j = 0; j < HEIGHT; j++)
		{
			std::cout << arr[i][j] << ' ';
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;

	int max = 0, indexW, indexH;

	for (int i = 0; i < WIDTH; i++)
	{
		for (int j = 0; j < HEIGHT; j++)
		{
			if (arr[i][j] > max)
			{
				max = arr[i][j];
				indexW = i;
				indexH = j;
			}
		}
	}
	std::cout << "max " << max << " (" << indexW << ", " << indexH << ")"<< std::endl;
}


// В заданной матрице A(N, M) поменять местами столбцы с номерами P и Q.
void dop1()
{
	const int WIDTH = 5;
	const int HEIGHT = 5;
	int arr[WIDTH][HEIGHT];

	for (int i = 0; i < WIDTH; i++)
		for (int j = 0; j < HEIGHT; j++)
			arr[i][j] = rand() % 11;

	int P, Q;

	std::cout << "Первый ";
	std::cin >> P;
	std::cout << "Второй ";
	std::cin >> Q;
	std::cout << std::endl;

	for (int i = 0; i < WIDTH; i++)
	{
		for (int j = 0; j < HEIGHT; j++)
		{
			std::cout << arr[i][j] << ' ';
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;


	for (int i = 0, temp; i < WIDTH; i++)
	{
		temp = arr[i][P];
		arr[i][P] = arr[i][Q];
		arr[i][Q] = temp;
	}


	for (int i = 0; i < WIDTH; i++)
	{
		for (int j = 0; j < HEIGHT; j++)
		{
			std::cout << arr[i][j] << ' ';
		}
		std::cout << std::endl;
	}
}

// Дана матрица A(N, M). Найти количество элементов этой матрицы, больших среднего арифметического всех её элементов.
void dop2()
{
	const int WIDTH = 5;
	const int HEIGHT = 5;
	int arr[WIDTH][HEIGHT];

	for (int i = 0; i < WIDTH; i++)
		for (int j = 0; j < HEIGHT; j++)
			arr[i][j] = rand() % 11;

	int sum = 0, count = 0;

	for (int i = 0; i < WIDTH; i++)
	{
		for (int j = 0; j < HEIGHT; j++)
		{
			sum += arr[i][j];
		}
	}
	for (int i = 0; i < WIDTH; i++)
	{
		for (int j = 0; j < HEIGHT; j++)
		{
			if (arr[i][j] > sum / (WIDTH* HEIGHT))
				count++;
		}
	}
	std::cout << "count: " << count << std::endl;
}

 // Для заданной целочисленной матрицы A(N, M) определить, является ли сумма её элементов чётным числом.
void dop3()
{
	const int WIDTH = 5;
	const int HEIGHT = 5;
	int arr[WIDTH][HEIGHT];

	for (int i = 0; i < WIDTH; i++)
		for (int j = 0; j < HEIGHT; j++)
			arr[i][j] = rand() % 11 - 5;

	for (int i = 0; i < WIDTH; i++)
	{
		for (int j = 0; j < HEIGHT; j++)
		{
			std::cout << arr[i][j] << ' ';
		}
		std::cout << std::endl;
	}

	int sum = 0;

	for (int i = 0; i < WIDTH; i++)
		for (int j = 0; j < HEIGHT; j++)
			sum += arr[i][j];
		
	

	if(sum % 2 == 0)
		std::cout << "Да" << std::endl;
	else
		std::cout << "Нет" << std::endl;
	
}

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
}