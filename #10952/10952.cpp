#include <iostream>

int main(void)
{
	int a,b = 0;
	while (1){
		std::cin >> a >> b;
		if (a == 0 && b == 0)
			break ;
		else
			std::cout << a+b << '\n';
	}
	return (0);
}