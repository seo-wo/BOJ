#include <iostream>
#include <algorithm>

bool my_find(int* l, int num, int size)
{
	int start(0), end(size-1), mid(0);
	while (end - start >= 0)
	{
		mid = (start + end) / 2;
		if (l[mid] == num)
			return (true);
		else if (num < l[mid])
			end = mid - 1;
		else
			start = mid + 1;
	}
	return (false);
}

int main(void)
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	int N(0), M(0), num(0), i(-1);
	int *l;
	std::cin >> N;
	l = new int[N];
	while (++i < N){
		std::cin >> num;
		l[i] = num;
	}
	std::sort(l, l+N);
	std::cin >> M;
	while (M){
		std::cin >> num;
		my_find(l,num, N) ? std::cout << "1\n" : std::cout << "0\n";
		--M;
	}
	delete[] l;
	return (0);
}