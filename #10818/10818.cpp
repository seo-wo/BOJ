#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{
	int N(0);
	int num(0);
	std::vector<int> v;
	std::cin >> N;
	while(N)
	{
		std::cin >> num;
		v.push_back(num);
		--N;
	}
	std::cout << *std::min_element(v.begin(), v.end()) << " " << *std::max_element(v.begin(), v.end());
}