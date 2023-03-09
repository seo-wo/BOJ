#include <iostream>

int main(void)
{
	int room(0), ans(1), tmp(2);

	std::cin >> room;
	while (room >= tmp)
		tmp += 6 * (++ans-1);
	std::cout << ans;
	return (0);
}