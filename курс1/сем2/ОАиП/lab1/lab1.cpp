#include <iostream>

//int S(int x)
//{
//    if (x > 100)
//        return x + 10;
//    else
//        return S(S(x + 4));
//}
//int F(int n, int m)
//{
//    if (n==0)
//        return 1;
//    if (n < m)
//        return 1;
//    return 2 * F(n - 1, m);
//}
//
//int main()
//{
//    std::cout << "example 1" << std::endl;
//    std::cout << "4->" << S(4) << std::endl;
//    std::cout << "20->" << S(4) << std::endl;
//    std::cout << "69->" << S(4) << std::endl;
//
//    std::cout << "example 2" << std::endl;
//    std::cout << "3, 1->" << F(3,1) << std::endl;
//    std::cout << "8, 2->" << F(8,2) << std::endl;
//    std::cout << "12,4->" << F(12,4) << std::endl;
//    return 0;
//}

float dichotes(float a, float b, float e, float(f(float x)))
{
    float x;
    do
    {
        x = (a + b) / 2.f;

        (f(x) * f(a) <= 0) ? b = x : a = x;

    } while (abs(a - b) > 2.f * e);
    return x;
}
float f1(float x)
{
    return powf(x, 3) + x - 2.0f;
}
float f2(float x)
{
    return sinf(x) + 0.3f;
}

void printBin(int count ...)
{
    int *p = &count;
    for (int i = 0; i < count; i++)
    {
        int value = p[i + 1];
        std::cout << value << " - ";
        for (int i = 8 * sizeof(int) - 1; i >= 0 ; --i)
            std::cout << ((value >> i) & 1);
        std::cout << std::endl;
    }
}

int main()
{
    std::cout << "example 1" << std::endl;
    float a, b;
    std::cout << "a: ";
    std::cin >> a;
    std::cout << "b: ";
    std::cin >> b;

    std::cout << "x1: " << dichotes(a, b, 0.001, f1) << std::endl;
    std::cout << "x1: " << dichotes(a, b, 0.001, f2) << std::endl;


    std::cout << "example 2" << std::endl;
    printBin(3, 1, 2, 3);
    printBin(5, 4, 3, 98, 12, 33);
    printBin(2, 38, 126);
    return 0;
}