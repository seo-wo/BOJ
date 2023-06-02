#include <iostream>

int main(void)
{
	int h(0),w(0),n(0), t(0);
	int s(0),e(0);
	std::cin >> t;
	while(t)
	{
		std::cin >> h >> w >> n;
		s = n%h;
		e = n/h;
		if (s == 0)
			std::cout << h*100 + e <<'\n';
		else
			std::cout << s*100 + (e+1) << '\n';
		--t;
	}
	return (0);
}