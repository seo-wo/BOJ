#include <iostream>
#include <queue>

int main(void)
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	int N(0), i(0);
	std::queue<int> q;

	std::cin >> N;
	while (++i <= N)
		q.push(i);
	while (N != 1)
	{
		q.pop();
		q.push(q.front());
		q.pop();
		--N;
	}
	std::cout << q.front();
	return (0);
}