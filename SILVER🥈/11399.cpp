#include <iostream>
#include <algorithm>

int main(void)
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	int i(-1),N(0),P(0);
	std::cin >> N;
	int arr[N];
	while (++i < N){
		std::cin >> P;
		arr[i] = P;
	}
	std::sort(arr, arr+N);
	int sum(0), total(0);
	i = -1;
	while (++i < N){
		sum += arr[i];
		total += sum;
	}
	std::cout << total;
	return (0);
}