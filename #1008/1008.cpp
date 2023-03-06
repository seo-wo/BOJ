#include <iostream>
#include <iomanip>

int main(void){
	double a,b = 0.0;
	std::cin >> a >> b;
	if (b != 0)
		std::cout << std::fixed << std::setprecision(9) << a/b;
	return (0);
}