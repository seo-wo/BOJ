#include <iostream>
#include <cstring>

int main(void)
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	int N(0), M(0), index(0);
	int* table = new int[20000001];
	memset(table, 0, 20000001);
	std::cin >> N;;
	while(N)
	{
		std::cin >> index;
		if (index < 0)
		{
			index *= -1;
			index += 10000000;
		}
		table[index] += 1;
		--N;
	}
	std::cin >> M;
	while(M)
	{
		std::cin >> index;
		if (index < 0)
		{
			index *= -1;	
			index += 10000000;
		}
		std::cout << table[index] << ' ';
		--M;
	}
	delete[] table;
	return (0);
}