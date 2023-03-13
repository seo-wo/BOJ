#include <iostream>

int dp[11];

int make_dp(int n)
{
	if (dp[n] != 0 || n == 0)
		return (dp[n]);
	dp[n] = make_dp(n-1) + make_dp(n-2) + make_dp(n-3);
	return (dp[n]);
}

int main(void)
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	int T(0), n(0);
	dp[0] = 0;
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;
	std::cin >> T;
	while(T){
		std::cin >> n;
		std::cout << make_dp(n) <<'\n';
		--T;
	}
	return (0);
}