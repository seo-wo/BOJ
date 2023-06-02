#include <iostream>

int main(void)
{
	int list[31] = {0,};
	int i(0), num(0);
	while (++i <= 28)
	{
		std::cin >> num;
		list[num] = 1;
	}
	i = 0;
	int cnt(0);
	while (++i < 31)
	{
		if (list[i] == 0 && cnt == 0)
		{
			std::cout << i << '\n';
			++cnt;
		}
		else if (list [i] == 0)
		{
			std::cout << i;
			break ;
		}
	}
	return (0);
}