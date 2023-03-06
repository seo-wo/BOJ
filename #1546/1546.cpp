#include <iostream>
#include <algorithm>
#include <vector>

int main(void)
{
	std::vector<double> v;
	double N(0);
	double tmp_N(0);
	double score(0);
	std::cin >> N;
	tmp_N = N;
	while (tmp_N)
	{
		std::cin >> score;
		v.push_back(score);
		--tmp_N;
	}
	double max = *std::max_element(v.begin(), v.end());
	std::vector<double>::iterator it = v.begin();
	double ret(0.0);
	while (it != v.end())
	{
		ret += *it / max * 100.0;
		++it;
	}
	std::cout << ret/N;
}