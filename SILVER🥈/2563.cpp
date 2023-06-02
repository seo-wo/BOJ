#include <iostream>

int main(void)
{
	int num(0), x(0), y(0), i, j, cnt(0);
	int pa[100][100] = {0,};
	std::cin >> num;
	while(num)
	{
		std::cin >> x >> y;
		i = -1;
		while (++i < 10)
		{
			j = -1;
			while(++j < 10)
			{
				if (pa[x+i][y+j] == 0)
				{
					++cnt;
					pa[x+i][y+j] = 1;
				}
			}
		}
		--num;
	}
	std::cout << cnt;
	return (0);
}