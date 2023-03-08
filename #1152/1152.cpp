#include <iostream>

int main(void)
{
	int cnt(0);
	std::string in, tmp(" ");

	while (1)
	{
		in = std::cin.get();
		if (in == "\n")
			break ;
		else if (in != " " && tmp == " ")
		{
			tmp = in;
			cnt++;
		}
		else
			tmp = in;
	}
	std::cout << cnt;
}