#include <iostream>
#include <string>

double check(const std::string str)
{
	if (str == "A+")
		return (4.5);
	else if (str == "A0")
		return (4.0);
	else if (str == "B+")
		return (3.5);
	else if (str == "B0")
		return (3.0);
	else if (str == "C+")
		return (2.5);
	else if (str == "C0")
		return (2.0);
	else if (str == "D+")
		return (1.5);
	else if (str == "D0")
		return (1.0);
	else
		return (0.0);
}

int main(void)
{
	std::string sub, s, c;
	int i(-1), t(0);
	double total(0.0), score;

	while(++i < 20)
	{
		std::cin >> sub >> s >> c;
		score = 0.0;
		score = std::stod(s);
		t += std::stoi(s);
		if (c == "P")
		{
			t -= std::stoi(s);
			score = 0.0;
		}
		else
			score *= check(c);
		total += score;
	}
	std::cout.precision(6);
	std::cout << total / t;
	return (0);
}