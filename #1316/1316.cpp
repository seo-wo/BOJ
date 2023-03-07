#include <iostream>

int	checker(std::string in)
{
	std::string::iterator it = in.begin();
	std::string tmp;
	while (it != in.end())
	{
		if (tmp.find(*it) != std::string::npos)
			return (0);
		tmp.push_back(*it);
		while (*it == *(it+1))
			++it;
		++it;
	}
	return (1);
}

int main(void)
{
	int N(0);
	int cnt(0);
	std::string in;
	std::cin >> N;
	while (N)
	{
		std::cin >> in;
		if (in.size() == 1)
			++cnt;
		else
			cnt += checker(in);
		--N;
	}
	std::cout << cnt;
}