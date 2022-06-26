#include <iostream>
#include <array>
//7

struct sensor
{
	float inaccuracy;
	float min;
	float max;
	float maximumSpeed;
};

int main()
{
	std::array <sensor, 10> R;

	//Инициализация R

	sensor smallestSpeed = R[0];

	for (int i = 1; i < 10; i++)
		if (smallestSpeed.maximumSpeed > R[i].maximumSpeed)
			smallestSpeed = R[i];

	std::cout << "inaccuracy: " << smallestSpeed.inaccuracy 
		      << "min: " << smallestSpeed.min
			  << "max: " << smallestSpeed.max
			  << "maximumSpeed: " << smallestSpeed.maximumSpeed
			  << std::endl;

	return 0;
}