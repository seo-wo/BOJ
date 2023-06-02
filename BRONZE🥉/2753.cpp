#include <iostream>

int main(void)
{
	int Y(0);

	std::cin >> Y;
	if (Y%4 == 0 && (Y%400 == 0 || Y%100 != 0))
		std::cout << 1;
	else
		std::cout << 0;
	return (0);
}