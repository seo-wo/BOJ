#include <iostream>
/* Pascal's triangle & dp with regreation */
int dp[16][16];

int get_reg(int floor, int hosu)
{
	if (dp[floor][hosu] != 0)
		return (dp[floor][hosu]);
	dp[floor][hosu] = get_reg(floor, hosu-1) + get_reg(floor-1, hosu);
	return(dp[floor][hosu]);
}

int main(void)
{
	std::ios_base::sync_with_stdio(false);
	int T(0), k(0), n(0), i(-1);
	std::cin >> T;
	int ans[T];
	while (++i < 16)
		dp[0][i] = 1;
	i = -1;
	while (++i < 16)
		dp[1][i] = i+1;
	i = -1;
	while (++i < 16)
		dp[i][0] = 1;
	i = -1;
	while (++i < T)
	{
		std::cin >> k >> n;
		ans[i] = get_reg(k + 1, n -1);
	}
	i = -1;
	while (++i < T)
		std::cout << ans[i] << '\n';
	return (0);
}