#include <iostream>

int main(void)
{
	int num(0), i(-1), max(0), max_i(0);
	int arr[81];

	while (++i < 81)
	{
		std::cin >> num;
		arr[i] = num;
		if (num > max)
		{
			max = num;
			max_i = i;
		}
	}
	std::cout << max << '\n' << (max_i/9)+1 << ' ' << (max_i%9)+1;
	return (0);
}