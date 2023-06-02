#include <iostream>

int main(void)
{
	int k(0), q(0), l(0), b(0), kn(0), p(0);

	std::cin >> k >> q >> l >> b >> kn >> p;
	std::cout << -(k-1) << ' ' << -(q-1) << ' ' << -(l-2) << ' ' << -(b-2) << ' ' << -(kn-2) << ' ' << -(p-8);
	return (0);
}