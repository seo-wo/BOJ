#include <iostream>
#include <vector>

void myParsing(std::string& p){
	int D(0);
	size_t pos(0);
	while ((pos = p.find("RR")) != p.npos)
		p.replace(pos, 2, "");
}

void	myOut(std::string& p, int n, std::string& x){
	int R(0), D(0);
	size_t len(0);
	/*
		if (RD)
			delete last
		else if (D)
			delete first
		else if (R)
			++R
		
		
	*/
}

int main(void){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	int T(0), n(0);
	std::string p(""), x("");

	std::cin >> T;
	while (T){
		std::cin >> p >> n >> x;
		myParsing(p);
		myOut(p, n, x);
		p.clear();
		x.clear();
		--T;
	}
	return (0);
}