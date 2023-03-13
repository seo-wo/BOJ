#include <iostream>
#include <map>

int main(void)
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);

	int N(0), M(0);
	std::string site, pwd;
	std::map<std::string, std::string> m;
	std::cin >> N >> M;
	while (N)
	{
		std::cin >> site >> pwd;
		m.insert({site, pwd});
		--N;
	}
	while (M)
	{
		std::cin >> site;
		if (auto search = m.find(site); search != m.end())
			std::cout << search->second << '\n';
		--M;
	}
	return (0);
}