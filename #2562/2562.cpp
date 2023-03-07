#include <iostream>

int main(void)
{
	int i(0),num(0),max(0), tmp(0);

	while (++i <= 9)
	{
		std::cin >> num;
		if (num > max)
		{
			max = num;
			tmp = i;
		}
	}
	std::cout << max << '\n' << tmp;
}