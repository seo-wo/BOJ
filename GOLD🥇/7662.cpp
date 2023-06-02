#include <iostream>
#include <map>
#define MAX 2147483648
#define MIN -2147483649

inline void fun(int k){
	int n(0);
	char c(0);
	std::map<int, int> m;
	long min(MAX), max(MIN);

	while(k){
		std::cin >> c >> n;
		if (c == 'I'){
			++m[n];
			if (n <= min)
				min = n;
			if (n >= max)
				max = n;
		} else if (c == 'D'){
			if (n == 1){
				if (m.find(max) != m.end()){
					--m[max];
					if (m[max] == 0){
						m.erase(max);
						if (m.empty()){
							max = MIN;
							min = MAX;
						} else{
							std::map<int, int>::reverse_iterator it = m.rbegin();
							max = it->first;
						}
					}
				}
			} else if (n == -1){
				if (m.find(min) != m.end()){
					--m[min];
					if (m[min] == 0){
						m.erase(min);
						if (m.empty()){
							max = MIN;
							min = MAX;
						} else{
							min = m.begin()->first;
						}
					}
				}
			}
		}
		--k;
	}

	if (m.empty())
		std::cout << "EMPTY\n";
	else 
		std::cout << max << ' ' << min << '\n';
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