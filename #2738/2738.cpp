#include <iostream>

int main(void)
{
	int N(0), M(0), i(-1), j(-1), num(0), i1(-1), i2(-1);

	std::cin >> N >> M;
	int arr[N*M];
	while(++i < N*2)
	{
		j = -1;
		while (++j < M)
		{
			std::cin >> num;
			if (i < N)
				arr[++i1] = num;
			else
				arr[++i2] += num;	
		}
	}
	i = 0;
	while (++i <=  N*M)
	{
		std::cout << arr[i-1] << ' ';
		if (i%M == 0)
			std::cout << '\n';
	}
	return (0);
}