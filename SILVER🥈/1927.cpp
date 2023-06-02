#include <iostream>
#include <set>

int main(void)
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	int N(0), x(0);
	std::multiset<int> _set;
	std::cin >> N;
	while(N)
	{
		std::cin >> x;
		if (x == 0)
		{
			if (_set.empty())
				std::cout << 0 << '\n';
			else{
				std::cout << *(_set.begin()) << '\n';
				_set.erase(_set.begin());
			}
		}
		else
			_set.insert(x);
		--N;
	}
	return (0);
}