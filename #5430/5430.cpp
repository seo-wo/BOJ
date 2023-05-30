#include <iostream>
#include <deque>

void	myOut(std::string& p, int n, std::string& x){
	int R(0);
	std::string temp(""), num("");
	std::deque<std::string> dq;
	for (size_t i = 0; i < x.size(); ++i){
		if (isdigit(x[i])){
			num += x[i];
		}
		else{
			if (num != ""){
				dq.push_back(num);
				num.clear();
			}
		}
	}
	for (std::string::iterator it = p.begin(); it != p.end(); ++it){
		if (*it == 'D'){
			if (dq.size() == 0){
				std::cout << "error\n";
				return ;
			}
			if (R % 2 == 0)
				dq.pop_front();
			else
				dq.pop_back();
		}
		else if (*it == 'R')
			++R;
	}
	if (dq.size() == 0){
		std::cout << "[]\n";
		return ;
	}
	if (R % 2 == 0){
		std::deque<std::string>::iterator it = dq.begin();
		std::cout << '[';
		while(1){
			std::cout << *it;
			++it;
			if (it != dq.end())
				std::cout << ',';
			else{
				std::cout << "]\n";
				return ;
			}
		}
	}else{
		std::deque<std::string>::reverse_iterator rit = dq.rbegin();
		std::cout << '[';
		while(1){
			std::cout << *rit;
			++rit;
			if (rit != dq.rend())
				std::cout << ',';
			else{
				std::cout << "]\n";
				return ;
			}
		}
	}
}

int main(void){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	int T(0), n(0);
	std::string p(""), x("");

	std::cin >> T;
	while (T){
		std::cin >> p >> n >> x;
		myOut(p, n, x);
		p.clear();
		x.clear();
		--T;
	}
	return (0);
}