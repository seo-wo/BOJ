#include <iostream>
#include <set>

int main(void)
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::string order;
	std::set<int> s;
	std::set<int>::iterator _s;
	std::set<int>::iterator _e;
	int M(0), x(0);
	std::cin >> M;
	while(M){
		_s = s.begin();
		_e = s.end();
		std::cin >> order;
		if (order == "add"){
			std::cin >> x;
			s.insert(x);
		}
		else if (order == "remove"){
			std::cin >> x;
			s.erase(x);
		}
		else if (order == "check"){
			std::cin >> x;
			_s = s.find(x);
			if (_s != _e)
				std::cout << 1 << '\n';
			else
				std::cout << 0 << '\n';
		}
		else if (order == "toggle"){
			std::cin >> x;
			_s = s.find(x);
			if (_s != _e)
				s.erase(x);
			else
				s.insert(x);
		}
		else if (order == "all"){
			for (int i = 0; i <= 20; ++i)
				s.insert(i);
		}
		else if (order == "empty"){
			s.clear();
		}
		--M;
	}
	return (0);
}