#include <iostream>

int main(void)
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);

	int H(0),M(0);
	std::cin >> H >> M;
	if (M < 45)
	{
		M += 60;
		M -= 45;
		if (H == 0)
			H = 23;
		else
			H -= 1;
	}
	else
		M -= 45;

	std::cout << H << ' ' << M;
}