#include <iostream>

std::string getWord(std::string& str, int &index)
{
    std::string result;
    for (; str[index] != '\0'; index++)
    {
        if (str[index] == ' ')
        {
            index++;
            return result;
        }
        else
        {
            result += str[index];
        }
    }
    index = -1;
    return result;
}
// 1. Скопировать из файла FILE1 в файл FILE2 все строки, в которых содержится не менее двух одинаковых слов. Определить номер слова, в котором больше всего цифр.
void ex1()
{
    auto f1 = std::ifstream("FILE1.txt");
    auto f2 = std::ofstream("FILE2.txt");

    std::string str = { };
    std::string wordA = { };
    std::string wordB = { };
    int WIndex = 0;
    int MaxNumIndex = 0;
    int MaxNum = 0;

    while (!f1.eof())
    {
        int count;
        int indexA;
        int indexB;
        indexA = 0;
        count = 0;
        std::getline(f1, str);

        do
        {
            wordA = getWord(str, indexA);
            WIndex++;
            count--;
            indexB = 0;
            int numCount = std::count_if(wordA.begin(), wordA.end(), isdigit);
            if (numCount > MaxNum)
            {
                MaxNum = numCount;
                MaxNumIndex = WIndex;
            }
            do
            {
                wordB = getWord(str, indexB);
                if (wordA == wordB)
                {
                    count++;
                }
            } while (indexB != -1);
        } while (indexA != -1);

        if (count > 2)
        {
            f2 << str << '\n';
        }
    }
    
    std::cout << "Num = " << MaxNumIndex << std::endl;

    f1.close();
    f2.close();
}
// 2. Ввести с клавиатуры строку символов, состоящую из слов, разделенных пробелами, и записать ее в файл. Прочитать из файла данные и вывести все слова, которые содержат букву «х».
void ex2()
{
    {
        auto f = std::ofstream("ff.txt");

        char buf[256] = { '\0' };
        do {
            std::cin >> buf;
            f << buf << ' ';
        } while (buf[0] != 'q');
        f.close();
    }
    {
        auto f = std::ifstream("ff.txt");

        char buf[256] = { '\0' };
        bool isX;
        while(!f.eof()) 
        {
            isX = false;
            f >> buf;

            /*if (buf[0] == '\0')
                break;*/

            for (int i = 0; buf[i] != '\0'; i++)
                if(buf[i] == 'x')
                    isX = true;
            
            if (isX)          
                std::cout << buf << ' ';
        }
        f.close();
    }
}
int main(){
    return 0;
}
}