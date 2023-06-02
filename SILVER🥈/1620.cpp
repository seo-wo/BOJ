#include <iostream>
#include <unordered_map>
#include <string>

int main(void)
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	int N(0),M(0),i(0);
	std::unordered_map<std::string, int> um;
	std::unordered_map<int, std::string> um1;
	std::unordered_map<std::string, int>::iterator it;
	std::unordered_map<int, std::string>::iterator it1;
	std::string name, quiz;
	std::cin >> N >> M;
	while (++i <= N)
	{
		std::cin >> name;
		um.insert(std::pair<std::string, int>(name,i));
		um1.insert(std::pair<int, std::string>(i, name));
	}
	while (M)
	{
		std::cin >> quiz;
		if (isdigit(quiz[0])){
			it1 = um1.find(std::stoi(quiz));
			std::cout << it1->second << '\n';
		}
		else{
			it = um.find(quiz);
			std::cout << it->second << '\n';
		}
		--M;
	}
	return (0);
}