#include <iostream>

int main(void)
{
	std::string in;
	std::cin >> in;
	std::string::reverse_iterator rit = in.rbegin();
	std::string::iterator it = in.begin();
	int size = in.size();
	size /= 2;	
	int cnt(-1);
	while (++cnt < size)
	{
		if (*it != *rit)
		{
			std::cout << "0";
			return (0);
		}
		++it;
		++rit;
	}
	std::cout << "1";
	return (0);
}