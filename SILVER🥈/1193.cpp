#include <iostream>

int main(void)
{
	int X(0),num(1),cl(1), start(0), up(1), down(0);
	std::cin >> X;

	while (X > num)
		num += ++cl;
	start = num - cl + 1;
	down = cl;
	while (start < X)
	{
		++up;
		--down;
		++start;
	}
	if (cl%2 == 0)
		std::cout << up << '/' << down;
	else
		std::cout << down << '/' << up;
	return (0);
}