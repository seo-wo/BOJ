#include <iostream>
#include <string.h>

int main(void)
{
	int C(0);
	int num(0), score(0), i;
	double sum, avg, cnt;
	std::cin >> C;
	while (C)
	{
		std::cin >> num;
		int list[num];
		i = -1;
		sum = 0.0;
		avg = 0.0;
		cnt = 0.0;
		memset(list, 0, num);
		while(++i < num)
		{
			std::cin >> score;
			list[i] = score;
			sum += score;
		}
		avg = (sum/num);
		i = -1;
		while (++i < num)
		{
			if (list[i] > avg)
				++cnt;
		}
		std::cout << std::fixed;
		std::cout.precision(3);
		std::cout << cnt / num * 100 << "%\n";
		--C;
	}
}