#include <iostream>
#include <queue>

int main(void)
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	int N(0), num(0), cnt(0),i(0), flag(1), sq(0);
	std::queue<int> q;
	std::cin >> N;
	while (N){
		std::cin >> num;
		q.push(num);
		--N;
	}
	while (!q.empty())
	{
		flag = 1;
		if (q.front() == 1)
			q.pop();
		else if (q.front() == 2){
			++cnt;
			q.pop();
		}
		else{
			i = 2;
			while (i * i <= q.front())
			{
				if (q.front() % i == 0){
					q.pop();
					flag = 0;
					break ;
				}
				++i;
			}
			if (flag == 1){
				q.pop();
				++cnt;
			}
		}
	}
	std::cout << cnt;
	return (0);
}