#include <iostream>
using namespace std;
//9 G

int main()
{
    int nap, x;

    cout << "1)'градус в час' в 'градус в минуту'\n"
        "2)'градус в минуту' в 'градус в час'\n"
        "3)'градус в минуту' в 'радиан в минуту'\n"
        "4)'радиан в минуту' в 'градус в час'\n"
        "5)'радиан в минуту' в 'градус в минуту'\n"
        "6)'градус в час' в 'радиан в минуту'\n"
        "Введите Направление Перевода: ";
    cin >> nap;

    cout << "Введите чесло: ";
    cin >> x;

    cout << "Результат Перевода: ";

    switch (nap)
    {
    case 1: 
        cout << x / 60 << endl;
        break;
    case 2: 
        cout << x * 60 << endl;
        break;
    case 3: 
        cout << x * (3.14 / 180) << endl;
        break;
    case 4: 
        cout << x * (180 / 3.14) * 60 << endl;
        break;
    case 5: 
        cout << x * (180 / 3.14) << endl;
        break;
    case 6: 
        cout << x * (3.14 / 180) / 60 << endl;
        break;
    }

    return 0;
}