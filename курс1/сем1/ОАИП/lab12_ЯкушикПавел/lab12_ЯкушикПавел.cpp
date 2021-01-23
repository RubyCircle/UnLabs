#include <iostream>
#include <Windows.h>

// Из предложения удалить все символы, совпадающие с символом, введенным с клавиатуры
void foo1()
{
	char sentence[] = "Лев Николаевич Толстой - один из наиболее известных русских писателей и мыслителей, один из величайших писателей-романистов мира";

	//std::cin >> sentence;

	char symbol;

	std::cout << "Введите символ: ";
	std::cin >> symbol;
	std::cout << std::endl;

	int shift = 0;
	for (int i = 0; sentence[i + shift] != '\0'; i++)
	{
		if (sentence[i + shift] == symbol)			
			shift++;			

		sentence[i] = sentence[i + shift];
	}
	for (int i = 0; sentence[i] != '\0'; i++)
	{
		std::cout << sentence[i];
	}
	std::cout << std::endl;
}

// Написать программу, реализующую выделение подстроки S1 длиной k с позиции номер n из строки.
void foo2()
{
	char sentence[256] = "Лев Николаевич Толстой - один из наиболее известных русских писателей и мыслителей, один из величайших писателей-романистов мира";

	//std::cin >> sentence;

	char newstr[256];

	int k, n;

	std::cout << "Введите длину: ";
	std::cin >> k;
	std::cout << std::endl;

	std::cout << "Введите позицию: ";
	std::cin >> n;
	std::cout << std::endl;

	strncpy_s(newstr, sentence + n, k);
	for (int i = 0; newstr[i] != '\0'; i++)
	{
		std::cout << newstr[i];
	}
	std::cout << std::endl;
}

// В заданном предложении указать слово, в котором доля гласных (A, E, I, O, U — строчных или прописных) максимальна
void dop1()
{
	char sentence[256] = "Lev Nikolaevich Tolstoy is one of the most famous Russian writers and thinkers, one of the greatest novelists in the world";

	//std::cin >> sentence;

	char word[256] = {'\0'};
	char vowels[] = { 'a', 'e', 'i', 'o', 'u' };

	int newWordIndex = 0;
	int max = 0, maxIndex = 0;

	for (int i = 0, j = 0; sentence[i] != '\0'; i++)
	{
		if (sentence[i] == ' ' || sentence[i] == '\n'|| sentence[i] == '\0')
		{
			int count = 0;
			for (int wordIndex = 0; word[wordIndex] != '\0'; wordIndex++)
			{
				for (int vowelsIndex = 0; vowelsIndex < 5; vowelsIndex++)
				{
					if (word[wordIndex] == vowels[vowelsIndex])
					{
						count++;
						break;
					}
				}
			}
			if (max < count)
			{
				max = count;
				maxIndex = newWordIndex;
			}
			for (int wordIndex = 0; word[wordIndex] != '\0'; wordIndex++)
				word[wordIndex] = '\0';
			
			newWordIndex = i + 1;
			j = 0;
		}
		else
		{
			word[j] = sentence[i];
			j++;
		}
	}

	for (int i = maxIndex; sentence[i] != ' ' && sentence[i] != '\n' && sentence[i] != '\0'; i++)
	{
		std::cout << sentence[i];
	}
	std::cout << std::endl;
}

// Из заданного предложения удалить те слова, которые уже встречались в предложении раньше
/*void dop2()
{
	char sentence[256] = "Lev Nikolaevich Tolstoy is one of the most famous Russian writers and thinkers, one of the greatest novelists in the world";
	char result[256] = { '\0' };
	int resultIndex = 0;

	char word1[256] = { '\0' };
	char word2[256] = { '\0' };

	int shift = 0;
	int newWordIndex = 0;

	for (int i1 = 0, j1 = 0; sentence[i1] != '\0'; i1++)
	{
		// 1
		if (sentence[i1] == ' ' || sentence[i1] == '\n' || sentence[i1] == '\0')
		{
			bool allMatch;
			allMatch = true;
			for (int i2 = 0, j2 = 0; sentence[i2] != '\0'; i2++)
			{ 
				// 2
				if (sentence[i2] == ' ' || sentence[i2] == '\n' || sentence[i2] == '\0')
				{ 
					if (strlen(word1) == strlen(word2))
					{
						bool allWord = true;
						for (int wordIndex = 0; word1[wordIndex] != '\0' && word2[wordIndex] != '\0'; wordIndex++)
						{
							if (word1[wordIndex] != word2[wordIndex])
							{
								allWord = false;
								break;
							}
							if (allWord)
							{
								allMatch = allWord;
								break;
							}
						}
					}
					else
					{
						allMatch = false;
					}
					for (int wordIndex = 0; word2[wordIndex] != '\0'; wordIndex++)
						word2[wordIndex] = '\0';
					j2 = 0;
				}
				else
				{
					word2[j2] = sentence[i2];
					j2++;
				}
			}

			if (!allMatch)
			{
				for (int wordIndex = 0; word1[wordIndex] != '\0'; wordIndex++)
				{
					result[resultIndex] = word1[wordIndex];
					resultIndex++;
				}
				result[resultIndex] = ' ';
				resultIndex++;
			}

			for (int wordIndex = 0; word1[wordIndex] != '\0'; wordIndex++)
				word1[wordIndex] = '\0';
			j1 = 0;
		}
		else
		{
			word1[j1] = sentence[i1];
			j1++;
		}
	}

	for (int wordIndex = 0; result[wordIndex] != '\0'; wordIndex++)
	{
		std::cout << result[wordIndex];
	}
	std::cout << std::endl;
}*/
// Преобразовать строку: после каждой буквы a добавить символ !
void dop2()
{
	char sentence[128] = "Лев Николаевич Толстой один из наиболее известных русских писателей и мыслителей, один из величайших писателей-романистов мира";
	//std::cin >> sentence;
	
	char result[256] = { '\0' };

	int resultIndex = 0;
	for (int i = 0; sentence[i] != '\0'; i++)
	{
		if (sentence[i] == 'а')
		{
			result[resultIndex] = sentence[i];
			result[resultIndex + 1] = '!';
			resultIndex += 2;
			continue;
		}
		result[resultIndex] = sentence[i];
		resultIndex++;
	}
	for (int i = 0; sentence[i] != '\0'; i++)
	{
		std::cout << result[i];
	}
	std::cout << std::endl;
}

// В строке есть два символа *. Получить все символы между первым и вторым символом *.
void dop3()
{
	char sentence[] = "Лев Николаевич Толстой один из наиболее известных русских *писателей и мыслителей*, один из величайших писателей-романистов мира";
	//std::cin >> sentence;
	
	int startIndex = -1;
	int endIndex = -1;

	int resultIndex = 0;
	for (int i = 0; sentence[i] != '\0'; i++)
	{
		if (sentence[i] == '*')
		{
			if (startIndex == -1)
				startIndex = i;
			else
			{
				endIndex = i;
				break;
			}
		}
	}
	for (int i = startIndex + 1; i < endIndex; i++)
	{
		std::cout << sentence[i];
	}
	std::cout << std::endl;
}

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	dop3();
}