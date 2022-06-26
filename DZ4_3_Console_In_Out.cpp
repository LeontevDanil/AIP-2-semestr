#include <iostream>
#include <cmath>

void TimeToHMS(int T,int& H,int& M,int& S)
{
    H = T / 3600;

    T -= H * 3600;

    M = T / 60;

    T -= M * 60;

    S = T;
}

int main()
{
    int T, H, M, S;

    std::cout << "T = ";
    std::cin >> T;

    TimeToHMS(T, H, M, S);

    std::cout << "H: " << H << "\nM: " << M << "\nS: " << S << std::endl;

    return 0;
}