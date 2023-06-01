#include <iostream>
#include <queue>
#include <vector>

inline void fun(int k){
	int n(0), I(0), D(0);
	char c(0);
	std::priority_queue<int> dq1;
	std::priority_queue<int, std::vector<int>, std::greater<int> > dq2;

	while(k){
		std::cin >> c >> n;
		if (c == 'I'){
			++I;
			dq1.push(n);
			dq2.push(n);
		}
		else if (c == 'D'){
			if (dq1.empty() || dq2.empty()) ;
			else{
				++D;
				if (n == -1)
					dq2.pop();
				else if (n == 1)
					dq1.pop();
			}
		}
		--k;
	}

	if (D >= I)
		std::cout << "EMPTY\n";
	else
		std::cout << dq1.top() << ' ' << dq2.top() << '\n';
}

int main(void){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	int T(0), k(0);

	std::cin >> T;
	while(T){
		std::cin >> k;
		fun(k);
		--T;
	}
}