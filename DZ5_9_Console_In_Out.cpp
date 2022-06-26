#include <iostream>
//9

struct sensor
{
	float inaccuracy;
	float min;
	float max;
	float maximumSpeed;
};

int main()
{
	sensor R1, R2;

	//Инициализация R1 и R2

	std::cout << (R1.inaccuracy + R2.inaccuracy) / 2 << std::endl;

	return 0;
}