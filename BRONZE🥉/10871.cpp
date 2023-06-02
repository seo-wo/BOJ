#include <iostream>
#include <vector>

int main(void)
{
	int N(0), X(0);
	int num(0);
	std::vector<int> v;
	std::cin >> N >> X;
	while (N)
	{
		std::cin >> num;
		if (num < X)
			v.push_back(num);
		--N;

	}
	std::vector<int>::iterator it = v.begin();
	while (it != v.end())
	{
		std::cout << *it;
		++it;
		if (it != v.end())
			std::cout << " ";
	}
	return (0);
}