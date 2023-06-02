#include <iostream>

int main(void)
{
	int N(0), i(-1), j(0), k(0);
	char star('*'), space(' ');

	std::cin >> N;
	if (N == 1)
	{
		std::cout << star << '\n';
		return (0);
	}
	while(++i < (2*N-1)/2)
	{
		j = N - 1 - i;
		while(j--)
			std::cout << space;
		k = (i*2) + 1;
		while(k--)
			std::cout << star;
		std::cout << '\n';
	}
	j = -1;
	while (++j < 2*N-1)
		std::cout << star;
	std::cout << '\n';
	i = -1;
	while(++i < (2*N-1)/2)
	{
		j = i + 1;
		while (j--)
			std::cout << space;
		k = 2 * (N - 1) - 2 * i - 1;
		while (k--)
			std::cout << star;
		std::cout << '\n';
	}
}