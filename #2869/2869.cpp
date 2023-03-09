#include <iostream>

int main(void)
{
	double A(0),B(0),V(0),tmp(0);
	int day(1);
	std::cin >> A >> B >> V;
	if (A != V)
	{
		tmp = (V-B)/(A-B);
		if (tmp-static_cast<int>(tmp) != 0)
		{
			day += (V-B)/(A-B);
			std::cout << day;
		}
		else
			std::cout << static_cast<int>(tmp);
		return (0);
	}
	std::cout << day;
	return (0);
}