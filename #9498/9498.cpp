#include <iostream>

int main(void)
{
	int score(0);

	std::cin >> score;
	if (score < 60)
		std::cout << "F";
	else if (score < 70)
		std::cout << "D";
	else if (score < 80)
		std::cout << "C";
	else if (score < 90)
		std::cout << "B";
	else
		std::cout << "A";
	return (0); 
}