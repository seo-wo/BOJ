#include <iostream>
#include <set>

int main(void)
{
	int i(-1), num(0);
	std::set<int> set;
	while (++i < 10)
	{
		std::cin >> num;
		set.insert(num%42);
	}
	std::cout << set.size();
}