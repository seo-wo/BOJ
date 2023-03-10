#include <iostream>
#include <queue>

int main(void)
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	int n(0), num(0), i(-1);
	std::string s;
	std::queue<int> q;

	std::cin >> n;
	while(++i < n)
	{
		std::cin >> s;
		if (s == "push")
		{
			std::cin >> num;
			q.push(num);
		}
		else if (s == "size")
			std::cout << q.size() << '\n';
		else if (s == "empty")
			std::cout << q.empty() << '\n';
		else if (q.empty())
			std::cout << -1 << '\n';
		else if (s == "pop")
		{
			std::cout << q.front() << '\n';
			q.pop();
		}
		else if (s == "front")
			std::cout << q.front() << '\n';
		else if (s == "back")
			std::cout << q.back() << '\n';
	}
	return (0);
}