#include <iostream>

int main(void)
{
	int A,B,C = 0;
	std::cin >> A >> B >> C;
	std::cout << (A+B)%C << '\n' <<  ((A%C) + (B%C))%C << '\n' << (A*B)%C << '\n' <<  ((A%C)*(B%C))%C;
	return (0);
}