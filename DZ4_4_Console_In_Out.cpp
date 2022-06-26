#include <iostream>4
//5

void Minmax(float& X,float& Y)
{
    float b;

    if (X > Y)
    {
        b = X;
        X = Y;
        Y = b;
    }
    else
    {
        b = Y;
        Y = X;
        X = b;
    }
}

int main()
{
    float X, Y;

    std::cout << "X = ";
    std::cin >> X;

    std::cout << "Y = ";
    std::cin >> Y;

    Minmax(X, Y);

    std::cout << "X: " << X << "\nY: " << Y << std::endl;

    return 0;
}