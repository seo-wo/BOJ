#include <iostream>

int main(void)
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::string num;
	std::string::iterator b;
	std::string::reverse_iterator rb;
	int size(0), i(0),flag(0);
	while (1){
		std::cin >> num;
		if (num == "0")
			break;
		size = num.size();
		b = num.begin();
		rb = num.rbegin();
		i = -1;
		flag = 1;
		while (++i < size)
		{
			if (*b != *rb)
			{
				std::cout << "no\n";
				flag = 0;
				break ;
			}
			++b;
			++rb;
		}
		if (flag == 1)
			std::cout << "yes\n";
	}
	return (0);
}