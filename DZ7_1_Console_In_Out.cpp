#include <iostream>
#include <array>
//1

int CreatingNewMatrix(std::array <std::array<int, 3>, 3>& M)
{
    int min = M[0][0];

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (M[i][j] < min)
                min = i;

    for (int i = 0; i < 3; i++)
        M[min][i] = 0;
}

void outputMatrix(std::array <std::array<int, 3>, 3> M)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout << M[i][j] << ' ';
        }
        std::cout << std::endl;
    }
}

int main()
{

    std::array <std::array<int, 3>, 3> M;

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            M[i][j] = rand() % 21 - 10;

    std::cout << "matrix before: \n" << std::endl;

    outputMatrix(M);

    CreatingNewMatrix(M);

    outputMatrix(M);

    getchar();

    return 0;
}