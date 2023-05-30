#include <iostream>
#include <queue>
#include <vector>

int main(void){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	int T(0), num(0), num2(0);
	std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int> >, std::greater<std::pair<int,int> > > pq;
	std::cin >> T;
	while(T){
		std::cin >> num;
		if (num == 0){
			if (pq.empty())
				std::cout << '0';
			else{
				std::cout << pq.top().second;
				pq.pop();
			}
			std::cout << '\n';
		}
		else{
			num2 = num > 0 ? num : -num;
			pq.push(std::make_pair(num2, num));
		}
		--T;
	}
	return (0);
}