#include <iostream>
//1 с   

struct Time
{
	unsigned int seconds;
	unsigned int minutes;
	unsigned int hours;
};

int Fun(Time T)
{
	unsigned int Tsec = T.seconds + (T.minutes + T.hours * 60) * 60;

	return Tsec;
}

int main()
{
	srand(0);

	Time T1;

	T1.hours = rand() % 10;
	T1.minutes = rand() % 60;
	T1.seconds = rand() % 60;

	std::cout << "seconds: " << Fun(T1) << std::endl;

	return 0;
}