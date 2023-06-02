#include <iostream>
#include <algorithm>

int main(void)
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	int N(0), num(0), i(-1);
	std::cin >> N;
	int arr[N];
	while (++i < N)
	{
		std::cin >> num;
		arr[i] = num;
	}
	std::sort(arr, arr+N);
	i = -1;
	while (++i < N)
		std::cout << arr[i] << '\n';
	return (0);
}
