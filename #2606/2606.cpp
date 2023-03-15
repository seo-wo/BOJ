#include <iostream>

int parent[101];

int find(int x)
{
	if (parent[x] == x)
		return (x);
	return (parent[x] = find(parent[x]));
}

void merge(int x, int y)
{
	x = find(x);
	y = find(y);
	if (x == y) return ;
	parent[y] = x;
}

bool isUnion(int x, int y)
{
	x = find(x);
	y = find(y);
	if (x == y) return (true);
	return (false);
}

int main(void)
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	int n(0), c(0),in(0), com1(0), com2(0), cnt(0);
	std::cin >> n >> c;
	for (int i = 1; i <= 101; ++i)
		parent[i] = i;
	while (c)
	{
		std::cin >> com1 >> com2;
		merge(com1, com2);
		--c;
	}
	for (int i = 2; i <= n; ++i)
		if(isUnion(1, i))	++cnt;
	std::cout << cnt;
	return (0);
}