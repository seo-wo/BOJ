#include <iostream>

int main(void)
{
	int N(0), M(0);
	int start(0), end(0), num(0);
	std::cin >> N >> M;
	int list[N + 1];
	int i(0);
	while (++i <= N)
		list[i] = 0;
	i = -1;
	while (++i < M)
	{
		std::cin >> start >> end >> num;
		while (start <= end)
		{
			list[start] = num;
			++start;
		}
	}
	i = 0;
	while (++i <= N)
		std::cout << list[i] << ' ';
}