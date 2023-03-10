#include <iostream>

int main(void)
{
	std::ios_base::sync_with_stdio(false);
	std::string s;
	int i(0);
	std::cin >> s >> i;
	std::cout << s[i-1];
	return (0);
}