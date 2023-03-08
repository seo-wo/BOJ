#include <iostream>
#include <string>

int main(void)
{
	std::string str1, str2, str3, str4, str5;
	int i(-1);

	std::cin >> str1;
	std::cin >> str2;
	std::cin >> str3;
	std::cin >> str4;
	std::cin >> str5;
	while(++i < 15)
	{
		if (i < str1.length())
			std::cout << str1[i];
		if (i < str2.length())
			std::cout << str2[i];
		if (i < str3.length())
			std::cout << str3[i];
		if (i < str4.length())
			std::cout << str4[i];
		if (i < str5.length())
			std::cout << str5[i];
	}
	return (0);
}