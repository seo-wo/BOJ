#include <iostream>
#include <map>

int main(void){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	int N(0), M(0), i(-1),cnt(0);
	std::string name;
	std::map<std::string, int> table;
	std::map<std::string, int> ans;
	std::cin >> N >> M;
	while (++i < N)
	{
		std::cin >> name;
		table.insert(std::pair<std::string,int>(name, i));
	}
	std::map<std::string, int>::iterator it;
	while (M)
	{
		std::cin >> name;
		it = table.find(name);
		if (it != table.end())
		{
			++cnt;
			ans.insert(std::pair<std::string,int>(name,M));
		}
		--M;
	}
	i = -1;
	std::cout << cnt << '\n';
	std::map<std::string, int>::iterator _b = ans.begin();
	std::map<std::string, int>::iterator _e = ans.end();
	while (_b != _e){
		std::cout << _b->first << '\n';
		++_b;
	}
	return (0);
}