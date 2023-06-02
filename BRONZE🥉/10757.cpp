#include <iostream>
#include <cstring>

int main(void)
{
	std::ios_base::sync_with_stdio(false);
	char n1[1000001];
	char n2[1000001];
	char ans[1000002];
	int len_n1(0), len_n2(0);
	int bigger(0), i(-1), over_ten_flag(0), tmp(0);
	std::cin >> n1 >> n2;
	len_n1 = strlen(n1);
	len_n2 = strlen(n2);
	memset(ans, '0', 1000002);
	if (len_n1 >= len_n2)
		++bigger;
	if (bigger)
		ans[len_n1 + 1] = '\0';
	else
		ans[len_n2 + 1] = '\0';
	--len_n1;
	--len_n2;
	if (bigger)
	{
		while (len_n2 >= 0)
		{
			if (over_ten_flag)
				ans[len_n1+1] = '1';
			tmp = (ans[len_n1+1] - '0') + (n1[len_n1] - '0') + (n2[len_n2] - '0');
			if (tmp >= 10)
			{
				over_ten_flag = 1;
				ans[len_n1+1] = tmp%10 + '0';
			}
			else
			{
				over_ten_flag = 0;
				ans[len_n1+1] = tmp + '0';
			}
			--len_n1;
			--len_n2;
		}
		if (len_n1 >= 0)
		{
			while(len_n1 >= 0)
			{
				if (over_ten_flag)
					ans[len_n1+1] = '1';
				tmp = ans[len_n1+1] - '0' + n1[len_n1] - '0';
				if (tmp < 10)
				{
					over_ten_flag = 0;
					ans[len_n1+1] = tmp + '0';
				}
				else{
					over_ten_flag = 1;
					ans[len_n1+1] = tmp%10 + '0';
				}
				--len_n1;
			}

		}
		if (over_ten_flag)
			ans[len_n1 + 1] = '1';
	}
	else
	{
		while (len_n1 >= 0)
		{
			if (over_ten_flag)
				ans[len_n2+1] = '1';
			tmp = (ans[len_n2+1] - '0') + (n1[len_n1] - '0') + (n2[len_n2] - '0');
			if (tmp >= 10)
			{
				over_ten_flag = 1;
				ans[len_n2+1] = tmp%10 + '0';
			}
			else
			{
				over_ten_flag = 0;
				ans[len_n2+1] = tmp + '0';
			}
			--len_n1;
			--len_n2;
		}
		if (len_n2 >= 0)
		{
			while(len_n2 >= 0)
			{
				if (over_ten_flag)
					ans[len_n2+1] = '1';
				tmp = ans[len_n2+1] - '0' + n2[len_n2] - '0';
				if (tmp < 10)
				{
					over_ten_flag = 0;
					ans[len_n2+1] = tmp + '0';
				}
				else{
					over_ten_flag = 1;
					ans[len_n2+1] = tmp%10 + '0';
				}
				--len_n2;
			}

		}
		if (over_ten_flag)
			ans[len_n2 + 1] = '1';	
	}
	i = -1;
	if (ans[0] == '0')
		i = 0;
	while (ans[++i])
		std::cout << ans[i];
	return (0);
}