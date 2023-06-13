/* 쉬운 최단거리 */
#include <iostream>
#include <queue>

int ans[1001][1001] = {0, };
int dx[4] = { 0, 0, -1, 1 };
int dy[4] = { -1, 1, 0, 0 };
bool visited[1001][1001];

int main(void){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	int n(0), m(0), input(0);
	std::queue<std::pair<int, int> > q;
	std::cin >> n >> m;

	for (int i = 0; i < n; ++i){
		for (int j = 0; j < m; ++j){
			std::cin >> input;
			if (input == 2){
				visited[i][j] = true;
				q.push(std::make_pair(i, j));
			}
			else if (input == 0)
				visited[i][j] = true;
			else
				visited[i][j] = false;
		}
	}
	//bfs
	while(!q.empty()){
		int x = q.front().first;
		int y = q.front().second;
		q.pop();

		for (int i = 0; i < 4; ++i){
			int nx = x + dx[i];
			int ny = y + dy[i];

			if (nx >= 0 && nx < n && ny >= 0 && ny < m){
				if (visited[nx][ny] == false){
					visited[nx][ny] = true;
					ans[nx][ny] = ans[x][y] + 1;
					q.push(std::make_pair(nx, ny));
				}
			}
		}
	}
	//answer
	for (int i = 0; i < n; ++i){
		for (int j = 0; j < m; ++j){
			if (!visited[i][j])
				ans[i][j] = -1;
			std::cout << ans[i][j] << ' ';
		}
		std::cout << '\n';
	}
	return(0);
}