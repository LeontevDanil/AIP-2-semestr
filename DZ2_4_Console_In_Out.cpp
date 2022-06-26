#include <iostream>
//Ж

int main()
{
    int x, y;

    std::cout << "Enter x : ";
    std::cin >> x;

    std::cout << "Enter y : ";
    std::cin >> y;

    if ((y > 2 * x * x) && (y > 1 - x) && (x < 1)) 
        std::cout << "Hits" << std::endl;
    else 
        std::cout << "Misses" << std::endl;
    
    return 0;
}