#include <iostream>

namespace lab2
{
    void ex1()
    {
        int k;
        std::cout << "Column: ";
        std::cin >> k;

        int colCount = 0;
        int rowCount = 0;

        int mat[128]{ 0 };

        FILE* f;
        int err = fopen_s(&f, "mat.txt", "r");
        if (err != 0 || f == NULL)
        {
            std::cout << "File not opened" << std::endl;
            return;
        }
        if (fscanf_s(f, "%d", &colCount) == NULL)
        {
            std::cout << "File is empty" << std::endl;
            return;
        }

        int data = 0;
        int iter = 0;
        for (; iter < 128 && !feof(f) && fscanf_s(f, "%d", &data) != NULL; iter++)
        {
            mat[iter] = data;
        }
        rowCount = iter / colCount;

        FILE* f2;
        err = fopen_s(&f2, "mat_result.txt", "w");
        if (err != 0 || f2 == NULL)
        {
            std::cout << "File not opened" << std::endl;
            return;
        }

        char buf[16]{ '\0' };
        _itoa_s(colCount, buf, 10);
        fputs(buf, f2);
        fputc('\n', f2);

        for (int i = rowCount * k; i < rowCount * (k + 1); i++)
        {
            _itoa_s(mat[i], buf, 10);
            fputs(buf, f2);
            fputc(' ', f2);
        }
        fclose(f2);
        fclose(f);
    }
    void ex2()
    {
        char buf[128]{'\0'};
        int k;
        std::cout << "k: ";
        std::cin >> k;

        FILE* f;
        int err = fopen_s(&f, "F1.txt", "r");
        if (err != 0 || f == NULL)
        {
            std::cout << "File not opened F1" << std::endl;
            return;
        }

        FILE* f2;
        err = fopen_s(&f2, "F2.txt", "w");
        if (err != 0 || f2 == NULL)
        {
            std::cout << "File not opened F2" << std::endl;
            return;
        }

        for (int i = 0; i <= k+3; i++)
        {
            fgets(buf, 128, f);
            //fscanf_s(f, "%s", buf);
            if (i >= k)
            {
                fputs(buf, f2);
            }
        }
        fclose(f2);
        fclose(f);
    }
}
int main(){
    lab2::ex2();
    return 0;
}
    std::cout << "x1: " << dichotes(a, b, 0.001, f2) << std::endl;


    std::cout << "example 2" << std::endl;
    printBin(3, 1, 2, 3);
    printBin(5, 4, 3, 98, 12, 33);
    printBin(2, 38, 126);
    return 0;
}