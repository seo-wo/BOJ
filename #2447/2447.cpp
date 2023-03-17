#include <iostream>

char arry[2188][2188];

inline void setStar(int n, int i, int j)
{
	if ((i / n) % 3 == 1 && (j /n) % 3 == 1)
		arry[i][j] = ' ';
	else 
	{
		if (n / 3 == 0)
			arry[i][j] = '*';
		else
			setStar(n/3, i, j);
	}
}

int main(void)
{
	int N(0), i(-1), j(0), tmp(0);
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);
	std::cin >> N;
	while (++i < N)
	{
		j = -1;
		while (++j < N)
			setStar(N, i, j);
	}
	i = -1;
	while (++i < N)
	{
		j = -1;
		while (++j < N)
			std::cout << arry[i][j];
		std::cout << '\n';
	}
	return (0);
}