#include <iostream>

int main(void)
{
	int N(0), M(0);
	int start(0), end(0), mid(0);
	int i(0), j(0), m(0), m1(0);

	std::cin >> N >> M;
	int arr[N+1];
	while(++i <= N)
		arr[i] = i;
	while (M)
	{
		std::cin >> start >> end >> mid;
		m = end - start;
		m1 = end - mid;
		i = -1;
		j = 0;
		int tmp[m + 1];
		while (++i <= m1)
			tmp[i] = arr[mid + i];
		while(i <= m)
			tmp[i++] = arr[start + j++];
		i = -1;
		while (++i <= m)
			arr[start + i] = tmp[i];
		--M;
	}
	i = 0;
	while (++i <= N)
		std::cout << arr[i] << ' ';
	return (0);
}