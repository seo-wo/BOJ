#include <iostream>

int main(void)
{
	std::string A,B,MAX;
	int i(2);
	std::cin >> A >> B;
	while (i >= 0)
	{
		if (A[i] > B[i])
		{
			MAX = A;
			break ;
		}
		else if (A[i] < B[i])
		{
			MAX = B;
			break ;
		}
		--i;
	}
	i = 2;
	while (i >= 0)
	{
		std::cout << MAX[i];
		--i;
	}
	return (0);
}