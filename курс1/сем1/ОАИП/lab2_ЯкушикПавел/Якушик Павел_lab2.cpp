#include <iostream>

#pragma region lab2
void foo15()
{
    double a = 1.75, b = 4.5e-4, y, r;

    y = a * exp(-2 * b) - sqrt(1 + a);
    r = log(1 + 20 * b) / (1 + a);


    std::cout << "y=" << y << std::endl << "r=" << r << std::endl;
}

void foo2()
{
    double b = -0.12, x = 1.3e-4, z, y;
    int n = 2;
    z = 1 / (x - 1) + sin(x) - sqrt(n);
    y = (exp(-b) + 1) / 2 * z;


    std::cout << "z=" << z << std::endl << "y=" << y << std::endl;
}

void foo4()
{
    double y = -1.2, x = 0.4e6, p, q;
    int t = 6;

    p = 2.6 * t + cos(y / (3 * x + y));
    q = sin(t) / cos(t);


    std::cout << "p=" << p << std::endl << "q=" << q << std::endl;
}

void foo10()
{
    double z = 1.7, a = 4.0e8, y, s;
    int n = 3, m = 3;

    y = (z + log(z)) / (exp(-3) + sqrt(a));
    s = (1.0 + (m * n)) / log(1 + z);


    std::cout << "y=" << y << std::endl << "s=" << s << std::endl;
}
#pragma endregion

int main()
{
    
    return 0;
}
