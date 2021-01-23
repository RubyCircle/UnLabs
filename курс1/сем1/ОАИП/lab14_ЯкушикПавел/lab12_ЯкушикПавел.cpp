#include <iostream>
#include <Windows.h>

void foo1();
void foo2();
void dop1();
void dop2();
void dop3();
void selector()
{
	int num;
	std::cout 
	<< "1) осн 1" << std::endl
	<< "2) осн 2" << std::endl
	<< "3) доп 1" << std::endl
	<< "4) доп 2" << std::endl
	<< "5) доп 3" << std::endl
	<< "номер задания: ";
	std::cin >> num;
	std::cout << std::endl;
	switch (num)
	{
	case 1:
	{
		foo1();
		break;
	}
	case 2:
	{
		foo2();
		break;
	}
	case 3:
	{
		dop1();
		break;
	}
	case 4:
	{
		dop2();
		break;
	}
	case 5:
	{
		dop3();
		break;
	}
	default:
		break;
	}
}

// В одномерном массиве, состоящем из п вещественных элементов, вычислить количество элементов
// массива, меньших С, и сумму целых частей элементов массива, расположенных после последнего отрицательного элемента.
void foo1()
{
	// init
	int size;

	int c, count = 0, sum = 0, index = -1;

	std::cout << "размер: ";
	std::cin >> size;
	std::cout << std::endl;

	float* arr = new float[size];

	for (int i = 0; i < size; i++)
	{
		arr[i] = static_cast<float>((rand() % 21) - 10) / 4.f;
	}

	// action
	std::cout << "меньших: ";
	std::cin >> c;
	std::cout << std::endl;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] < c)
		{
			count++;
		}
	}
	std::cout << "меньших " << c << " в массиве " << count << " элементов" << std::endl;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] < 0)
		{
			index = i;
		}
	}

	if (index == -1)
	{
		std::cout << "не найден отрицательный элемент" << std::endl;
		return;
	}

	for (int i = index; i < size; i++)
	{
		sum += arr[i];
	}
	std::cout << "сумму целых частей элементов массива, расположенных после последнего отрицательного элемента " << sum << std::endl;


	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << ' ';
	}
	std::cout << std::endl;

	delete[] arr;
}

// Проверить, все ли строки матрицы содержат хотя бы один нулевой элемент. 
// Если нет, то заменить значения всех отрицательных элементов матрицы на нулевые.
void foo2()
{
	// init
	int size;
	bool find = false;

	std::cout << "размер: ";
	std::cin >> size;
	std::cout << std::endl;

	int** arr = new int* [size];

	for (int i = 0; i < size; i++)
	{
		arr[i] = new int[size];
		for (int j = 0; j < size; j++)
		{
			arr[i][j] = rand() % 21 - 10;
		}
	}

	// action
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			std::cout << arr[i][j] <<" ";
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;


	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (arr[i][j] == 0)
			{
				find = true;
			}
		}
	}

	if (find)
	{
		std::cout << "найден" << std::endl;
		for (int i = 0; i < size; i++)
		{
			delete[] arr[i];
		}
		delete[] arr;
		return;
	}

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (arr[i][j] < 0)
				arr[i][j] = 0;
		}
	}

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			std::cout << arr[i][j] << " ";
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;


	for (int i = 0; i < size; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
}

// Задан массив A из n элементов. Подсчитать, сколько раз встречается в нем максимальное число.
void dop1()
{
	// init
	int size;
	int max = 0, count = 0;

	std::cout << "размер: ";
	std::cin >> size;
	std::cout << std::endl;

	int* arr = new int[size];

	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 21;
	}

	// action
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == max)
			count++;
	}

	std::cout << count << " раз" << std::endl;

	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << ' ';
	}
	std::cout << std::endl;

	delete[] arr;
}

// Проверить, есть ли в матрице хотя бы одна строка, содержащая отрицательный элемент, и найти ее номер. Все элементы столбца с таким же номером уменьшить вдвое
void dop2()
{
	// init
	int size;
	int index = 0;

	std::cout << "размер: ";
	std::cin >> size;
	std::cout << std::endl;

	int** arr = new int* [size];

	for (int i = 0; i < size; i++)
	{
		arr[i] = new int[size];
		for (int j = 0; j < size; j++)
		{
			arr[i][j] = rand() % 21;
		}
	}

	// action
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			std::cout << arr[i][j] << " ";
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;

	for (int i = 0; i < size; i++)
	{
		if (index != -1)
			break;
		for (int j = 0; j < size; j++)
		{
			if (arr[i][j] < 0)
			{
				index = i;
				break;
			}
		}
	}

	for (int i = 0; i < size; i++)
	{
		arr[i][index] = arr[i][index] / 2;
	}


	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			std::cout << arr[i][j] << " ";
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;

	// delete
	for (int i = 0; i < size; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
}

// В одномерном массиве, состоящем из n вещественных элементов, вычислить количество отрицательных элементов массива и сумму модулей элементов, 
// расположенных после минимального по модулю элемента.
void dop3()
{
	// init
	int size;

	int count = 0, sum = 0, indexMin = -1, min = INT_MAX;

	std::cout << "размер: ";
	std::cin >> size;
	std::cout << std::endl;

	int* arr = new int[size];

	for (int i = 0; i < size; i++)
	{
		arr[i] = (rand() % 21) - 10;
	}

	// action

	for (int i = 0; i < size; i++)
	{
		if (arr[i] < 0)
		{
			count++;
		}
	}
	std::cout << "отрицательных элементов массива " << count << std::endl;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
			indexMin = i;
		}
	}

	for (int i = indexMin; i < size; i++)
	{
		sum += abs(arr[i]);
	}
	std::cout << "сумма " << sum << std::endl;


	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << ' ';
	}
	std::cout << std::endl;

	delete[] arr;
}

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
}