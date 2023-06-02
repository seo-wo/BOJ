#include <iostream>
#include <queue>

int main(void)
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	int N(0), K(0), i(0);
	std::queue<int> q;
	std::cin >> N >> K;
	while (++i <= N)
		q.push(i);
	i = 1;
	std::cout << '<';
	while (!q.empty())
	{
		if (i == K){
			std::cout << q.front();
			q.pop();
			if(!q.empty())
				std::cout << ", ";
			i = 1;
		}
		else{
			q.push(q.front());
			q.pop();
			++i;
		}
	}
	std::cout << '>';
	return (0);
}