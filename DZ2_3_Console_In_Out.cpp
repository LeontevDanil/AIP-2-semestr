#include <iostream>
//1 J

int main()
{
    int x;

    std::cout << "enter x : ";

    std::cin >> x;

    std::cout << "y = ";

    if (x > 5)
        std::cout << 3 * x -5 << std::endl;
    else if (x < 5)
        std::cout << 2 * abs(x - 2) + 5 << std::endl;
    else 
        std::cout << 10 << std::endl;
    
    return 0;
}