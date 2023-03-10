#include <iostream>
#include <vector>

int main(void)
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	int n(0), num(0), i(-1);
	std::string s;
	std::vector<int> v;

	std::cin >> n;
	while(++i < n)
	{
		std::cin >> s;
		if (s == "push")
		{
			std::cin >> num;
			v.push_back(num);
		}
		else if (s == "size")
			std::cout << v.size() << '\n';
		else if (s == "empty")
			std::cout << v.empty() << '\n';
		else if (v.empty())
			std::cout << -1 << '\n';
		else if (s == "pop")
		{
			std::cout << v.front() << '\n';
			v.erase(v.begin());
		}
		else if (s == "front")
			std::cout << v.front() << '\n';
		else if (s == "back")
			std::cout << v.back() << '\n';
	}
	return (0);
}