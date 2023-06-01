#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

bool n1[1001];
bool n2[1001];
std::vector<int> v[10001];

void dfs(int k){
	int temp(0);

	std::cout << k << ' ';
	n1[k] = true;
	for (size_t i = 0; i < v[k].size(); ++i){
		temp = v[k][i];
		if (!n1[temp])
			dfs(temp);
	}
}

void bfs(int k){
	std::queue<int> q;
	int cur(0), next(0);

	q.push(k);
	n2[k] = true;
	while (!q.empty()){
		cur = q.front();
		std::cout << cur << ' ';
		q.pop();
		for (size_t i = 0; i < v[cur].size(); ++i){
			next = v[cur][i];
			if (!n2[next]){
				n2[next] = true;
				q.push(next);
			}
		}
	}
}


int main(void){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	int N(0), M(0), V(0), x(0), y(0);

	std::cin >> N >> M >> V;
	for(int i = 0; i < M; ++i){
		std::cin >> x >> y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	for (int i = 1; i <= N; ++i)
		std::sort(v[i].begin(), v[i].end());
	dfs(V);
	std::cout << '\n';
	bfs(V);

	return (0);
}