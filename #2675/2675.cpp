#include <iostream>

int main(void)
{
	int T(0), R(0), i(0), j(0), size(0);
	std::string s;

	std::cin >> T;
	while (T)
	{
		std::cin >> R >> s;
		i = -1;
		size = s.size();
		while (++i < size)
		{
			j = -1;
			while (++j < R)
				std::cout << s[i];
		}
		std::cout << '\n';
		--T;
	}
	return (0);
}