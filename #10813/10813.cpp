#include <iostream>

int main(void)
{
	int N(0),M(0);
	std::cin >> N >> M;
	int	list[N + 1];
	int i = 0;
	while(++i <= N)
		list[i] = i;
	int x(0),y(0);
	int tmp(0);
	while (M)
	{
		std::cin >> x >> y;
		tmp = list[x];
		list[x] = list[y];
		list[y] = tmp;
		--M;
	}
	i = 0;
	while(++i <= N)
		std::cout << list[i] << " ";
}