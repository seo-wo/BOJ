#include <iostream>
#include <cmath>
/* Tower of Hanoi
	mem : 2208KB 
	time : 120ms
*/
void	algo(int N, int _s, int _sub, int _end)
{
	if (N == 1)
	{
		std::cout << _s << ' ' << _end << '\n';
		return ;
	}
	algo(N-1, _s, _end, _sub);
	std::cout << _s << ' ' << _end << '\n';
	algo(N-1, _sub, _s, _end);
}

int main(void)
{
	std::ios_base::sync_with_stdio(false);

	int N;
	std::cin >> N;
	std::cout << static_cast<int>(pow(2, N) - 1) << '\n';
	algo(N, 1, 2,3);
	return (0);
}