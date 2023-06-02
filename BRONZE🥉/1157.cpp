#include <iostream>
#include <cstring>

int main(void)
{
	std::ios_base::sync_with_stdio(false);
	std::string s;

	std::cin >> s;
	int size(s.size()), max(0), i(-1), flag(0);
	int ans[26] = {0, };
	while (++i < size){
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = toupper(s[i]);
		ans[s[i] - 'A'] += 1;
	}
	i = -1;
	while (++i < 26){
		if (ans[i] > ans[max])
		{
			flag = 0;
			max = i;
		}
		else if (ans[i] != 0 && i != max && ans[i] == ans[max])
			flag = 1;
	}
	if (flag)
		std::cout << '?';
	else
		std::cout << static_cast<char>(max + 'A');
	return (0);
}