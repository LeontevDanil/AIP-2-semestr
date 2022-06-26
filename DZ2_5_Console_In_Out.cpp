#include <iostream>
//A

int main()
{
    int x, y;

    std::cout << "Enter x : ";
    std::cin >> x;

    std::cout << "Enter y : ";
    std::cin >> y;

    bool R1 = sqrt(x * x + y * y) < 2;

    bool R2 = sqrt(x * x + y * y) > 1;

    if (R1 && R2) 
        std::cout << "Hits" << std::endl;
    else 
        std::cout << "Misses" << std::endl;
    
    return 0;
}