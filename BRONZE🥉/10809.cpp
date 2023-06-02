#include <iostream>

int main(void)
{
	std::ios_base::sync_with_stdio(false);
	std::string s;
	int ans[26];
	std::cin >> s;
	int i(-1), size(s.size()), tmp(0);
	while(++i < 26)
		ans[i] = -1;
	i = -1;
	while (++i < size)
	{
		tmp = s[i] - 'a';
		if (ans[tmp] == -1)
			ans[tmp] = i;
	}
	i = -1;
	while (++i < 26)
		std::cout << ans[i] << ' ';
	return (0);
}
