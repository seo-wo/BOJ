#include <iostream>
#include <map>

int main(void)
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::multimap<int, std::string> mm;
	int T(0), age(0), i(-1);
	std::string name;

	std::cin >> T;
	while(++i < T)
	{
		std::cin >> age >> name;
		mm.insert(std::pair<int, std::string>(age, name));
	}
	std::multimap<int, std::string>::iterator it = mm.begin();
	while (it != mm.end())
	{
		std::cout << it->first << " " << it->second << '\n';
		++it;
	}
	return (0);
}