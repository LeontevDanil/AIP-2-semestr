﻿#include <iostream>
//1

int main()
{
    int N;

    std::cin >> N;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < i; j++)
            std::cout << 0;
        std::cout << std::endl;
    }
    
    return 0;
}