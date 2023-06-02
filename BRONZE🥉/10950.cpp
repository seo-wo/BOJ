#include <iostream>

int main(void)
{
	int T,a,b = 0;
	std::cin >> T;
	for(int i = 0; i < T; ++i)
	{
		std::cin >> a >> b;
		std::cout << a+b << '\n';
	}
	return (0);
}