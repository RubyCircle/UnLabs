#include <iostream>
#include <windows.h>

void foo1()
{
	float last, t = 0.45f, q;

	q = t;
	for (int i = 0; i < 6; i++)
	{
		float x;
		std::cout << "x = " << std::endl;
		std::cin >> x;
		t += (x + 1.0f) / x;
	}
	std::cout << "t = " << t << std::endl;
}

// 4
void foo2()
{
	float sum = 0, g;
	for (int i = 1; i < 5; i++)
	{
		float a;
		std::cout << "a = " << std::endl;
		std::cin >> a;
		sum += a / (float)i;
	}
	for (float k = 6.0f; k < 7.0f; k += 0.2f)
	{
		g = k / sum;
		std::cout << "g = " << g << std::endl;
	}
}

void foo3()
{
	const float m =4.0f,c = -0.045f;
	float g, mult = 1;
	for (int i = 1; i < 5; i++)
	{
		float b;
		std::cout << "b = ";
		std::cin >> b;
		mult *= pow(b + 1, 2);
	}
	g = c * mult;
	std::cout << "g = " << g << std::endl;
}

void dop1()
{
	const int length = 12;
	int pos[length] = { 1,-3,7,-1,6,3,-6,3,6,-2,3,6 };

	int sum = 0;
	for (int i = 1; i < length; i++)
		if (pos[i] % 2 == 0)
			sum += pos[i];

	std::cout << "sum = " << sum << std::endl;
}

void dop2()
{
	const int length = 12;
	int pos[length] = { 1,-3,7,-1,6,3,-6,3,6,-2,3,6 };

	int index = -1;
	for (int i = 1; i < length; i++)
	{
		if (pos[i] < 0)
		{
			index = i;
			break;
		}
	}

	if(index >= 0)
		std::cout << "index = " << index << std::endl;
	else
		std::cout << "не найден" << std::endl;
}

void dop3()
{
	const int length = 5;
	float pos[length] = { 1.2f, 4.1f, 7.8f, 2.0f, 0.1f };

	float max = 0, min = 100000;

	for (int i = 0; i < length; i++)
		if (pos[i] > max)
			max = i;

	for (int i = 0; i < length; i++)
		if (pos[i] < min)
			min = i;

	int count = 0;
	for (int i = 1; i < length; i++)
	{
		if (i > min && i < max)
			count++;
		else if(i > max && i < min)
			count++;
	}

	std::cout << "count = " << count << std::endl;

}

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	dop2();
}