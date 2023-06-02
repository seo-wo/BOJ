#include <iostream>

int dp[101][1000001];

int my_max(int n1, int n2)
{
	if (n1 > n2)
		return (n1);
	else
		return (n2);
}

int main(void)
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	int N(0), K(0), index(0), W(0), V(0);
	std::cin >> N >> K;
	int item[N+1][2];
	while(++index <= N)
	{
		std::cin >> W >> V;
		item[index][0] = W;
		item[index][1] = V;
	}
	for (int i = 1; i <= N; ++i){
		for (int j = 1; j <= K; ++j){
			if (item[i][0] > j)
				dp[i][j] = dp[i-1][j];
			else
				dp[i][j] = my_max(dp[i-1][j], dp[i-1][j-item[i][0]]+item[i][1]);
		}
	}
	std::cout << dp[N][K];
	return (0);
}