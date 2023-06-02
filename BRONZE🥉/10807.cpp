#include <iostream>
#include <algorithm>
#include <vector>

int main(void)
{
	int N(0);
	int num(0);
	std::cin >> N;
	std::vector<int> v;
	while (N)
	{
		std::cin >> num;
		v.push_back(num);
		--N;
	}
	int value(0);
	int count(0);
	std::cin >> value;
	std::vector<int>::iterator _start;
	_start = v.begin();
	while (1)
	{
		_start = std::find(_start, v.end(), value);
		if (_start == v.end())
			break;
		++_start;
		++count;
	}
	std::cout << count;
	return (0);
}