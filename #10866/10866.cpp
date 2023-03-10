#include <iostream>
#include <deque>

int main(void)
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	int n(0), num(0), i(-1);
	std::string s;
	std::deque<int> d;

	std::cin >> n;
	while(++i < n)
	{
		std::cin >> s;
		if (s == "push_back")
		{
			std::cin >> num;
			d.push_back(num);
		}
		else if (s == "push_front")
		{
			std::cin >> num;
			d.push_front(num);
		}
		else if (s == "size")
			std::cout << d.size() << '\n';
		else if (s == "empty")
			std::cout << d.empty() << '\n';
		else if (d.empty())
			std::cout << -1 << '\n';
		else if (s == "pop_front")
		{
			std::cout << d.front() << '\n';
			d.pop_front();
		}
		else if (s== "pop_back")
		{
			std::cout << d.back() << '\n';
			d.pop_back();
		}
		else if (s == "front")
			std::cout << d.front() << '\n';
		else if (s == "back")
			std::cout << d.back() << '\n';
	}
	return (0);
}