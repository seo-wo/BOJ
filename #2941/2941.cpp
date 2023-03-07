#include <iostream>

int main(void)
{
	std::string set[8] = {"c=","c-", "dz=", "d-", "lj", "nj", "s=", "z="};
	std::string _in;
	std::cin >> _in;
	int len(0);
	int i(-1);
	while (++i < 8)
	{
		if (_in.find(set[i]) != std::string::npos)
		{
			_in.replace(_in.find(set[i]), set[i].size(), " ");
			++len;
			i = -1;
		}
	}
	while (_in.find(" ") != std::string::npos)
		_in.erase(_in.find(" "), 1);
	std::cout << len + _in.size();
}