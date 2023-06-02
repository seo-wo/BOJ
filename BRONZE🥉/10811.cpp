#include <iostream>

void	swap_odd(int *list, int start, int range)
{
	int tmp(0);
	while (range > 0)
	{
		tmp = list[start];
		list[start] = list[start + range];
		list[start + range] = tmp;
		range -= 2;
		++start;
	}
}

void	swap_even(int *list, int start, int range)
{
	int tmp(0);
	while (range > 1)
	{
		tmp = list[start];
		list[start] = list[start + range];
		list[start + range] = tmp;
		range -= 2;
		++start;
	}
}

int main(void)
{
	int N(0), M(0);
	int i(0);
	int start(0), end(0), range(0);
	std::cin >> N >> M;
	int list[N + 1];
	while (++i <= N)
		list[i] = i;
	i = -1;
	while (++i < M)
	{
		std::cin >> start >> end;
		range = end - start;
		if (range != 0)
		{
			if (range % 2 == 1)
				swap_odd(list, start, range);
			else
				swap_even(list, start, range);
		}
	}
	i = 0;
	while (++i <= N)
		std::cout << list[i] << ' ';
	return (0);
}