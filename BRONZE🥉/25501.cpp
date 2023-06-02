#include <iostream>
#include <string>

int cnt;

int myP(char* s1, char* s2, int len)
{
	int i(0);
	while (len)
	{
		++cnt;
		if (s1[i] != s2[i])
			return (0);
		--len;
		++i;
	}
	++cnt;
	return (1);
}

int main(void)
{
	int T(0),i(-1),len(0),j, k;
	std::string s;
	char *tmp1, *tmp2;
	std::cin >> T;
	int ans1[T], ans2[T]; 
	while (++i < T)
	{
		std::cin >> s;
		len = s.size();
		if (len == 1)
		{
			ans1[i] = 1;
			ans2[i] = 1;
		}
		else
		{
			tmp1 = new char[len/2 + 1];
			tmp2 = new char[len/2 + 1];
			j = -1;
			k = 0;
			while (++j < len / 2)
			{
				tmp1[k] = s[j];
				++k;
			}
			tmp1[k] = '\0';
			k = 0;
			j = len;
			while (--j > len/2)
			{
				tmp2[k] = s[j];
				++k;
			}
			if (len%2 == 0)
			{
				tmp2[k] = s[j];
				++k;
			}
			tmp2[k] = '\0';
			ans1[i] = myP(tmp1, tmp2, len/2);
			ans2[i] = cnt;
			delete[] tmp1;
			delete[] tmp2;
		}
		cnt = 0;
	}
	i = -1;
	while(++i < T)
		std::cout << ans1[i] << ' ' << ans2[i] <<'\n';
	return (0);
}