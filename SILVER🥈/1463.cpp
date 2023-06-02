#include <iostream>

int dp[1000001];

int main(void)
{
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);
	int x(0);
	std::cin >> x;
	int i(3);
	dp[0] = 0;
	dp[1] = 0;
	dp[2] = 1;
	dp[3] = 1;
	while (++i <= x)
	{
		dp[i] = dp[i - 1] + 1;
		if (i % 2 == 0 && dp[i / 2] + 1 < dp[i])
			dp[i] = dp[i / 2] + 1;
		if (i % 3 == 0 && dp[i / 3] + 1 < dp[i])
			dp[i] = dp[i / 3] + 1;
	}
	std::cout << dp[x];
	return (0);
}