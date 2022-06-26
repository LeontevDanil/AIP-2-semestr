#include <iostream>
#include <array>
//19 a, b, c

struct fileCabinet
{
	char director;
	int cost;
	char name;
};

void out(fileCabinet videoLibrary)
{
	std::cout << "name: " << videoLibrary.name
							<< "\ndirector: " << videoLibrary.director
							<< "\ncost: " << videoLibrary.cost << "\n\n";
}

int main()
{
	srand(0);

	std::array<fileCabinet, 20> videoLibrary;

	for (int i = 0; i < 20; i++)
	{
		videoLibrary[i].director = rand() % 219 - 97;
		videoLibrary[i].cost = rand() % 60 + 120;
		videoLibrary[i].name = rand() % 219 - 97;
	}

	//a
	fileCabinet b;//буфер

	for (int i = 0; i < 19; i++)
		for (int i = 0; i < 19; i++)
			if (videoLibrary[i].cost > videoLibrary[i + 1].cost)
			{
				b = videoLibrary[i];
				videoLibrary[i] = videoLibrary[i + 1];
				videoLibrary[i + 1] = b;
			}

	for(int i = 0;i < 20;i++)
		out(videoLibrary[i]);


	std::cout << std::endl;
	//d
	char randDirector = rand() % 219 - 97;

	for (int i = 0; i < 19; i++)
		if (videoLibrary[i].director == randDirector)
			out(videoLibrary[i]);

	std::cout << std::endl;
	//e

	char der;

	std::cin >> der;

	for (int i = 0; i < 19; i++)
		if (videoLibrary[i].director == der)
			out(videoLibrary[i]);

	return 0;
}