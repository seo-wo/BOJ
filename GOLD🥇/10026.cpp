/* 적록색약 */
#include <iostream>
#include <algorithm>
#include <queue>

char map1[101][101];
char map2[101][101];
bool check1[101][101];
bool check2[101][101];
int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};

//bfs for normal people
inline void bfs1(int _i, int _j, int N){
	int area(0);
	std::queue<std::pair<int, int> > q;
	q.push(std::make_pair(_i, _j));
	check1[_i][_j] = true;

	while(!q.empty()){
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		for (int i = 0; i < 4; ++i){
			int nx = x + dx[i];
			int ny = y + dy[i];

			if (nx < 0 || nx >= N || ny < 0 || ny >= N)
				continue;
			if (check1[nx][ny] || map1[nx][ny] != map1[x][y])
				continue;
			check1[nx][ny] = true;
			q.push(std::make_pair(nx, ny));
		}
	}
}

//bfs for color blind people
inline void bfs2(int _i, int _j, int N){
	int area(0);
	std::queue<std::pair<int, int> > q;
	q.push(std::make_pair(_i, _j));
	check2[_i][_j] = true;

	while(!q.empty()){
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		for (int i = 0; i < 4; ++i){
			int nx = x + dx[i];
			int ny = y + dy[i];

			if (nx < 0 || nx >= N || ny < 0 || ny >= N)
				continue;
			if (check2[nx][ny] || map2[nx][ny] != map2[x][y])
				continue;
			check2[nx][ny] = true;
			q.push(std::make_pair(nx, ny));
		}
	}
}

int main(void){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	int N(0), ans1(0), ans2(0);
	std::string input("");
	std::cin >> N;

	for (int i = 0; i < N; ++i){
		std::cin >> input;
		for (int j = 0; j < N; ++j){
			map1[i][j] = input[j];
			if (input[j] == 'R')
				map2[i][j] = 'G';
			else
				map2[i][j] = input[j];
		}
		input.clear();
	}

	for(int i = 0; i < N; ++i){
		for (int j = 0; j < N; ++j){
			if (!check1[i][j]){
				bfs1(i, j, N);
				++ans1;
			}
			if (!check2[i][j]){
				bfs2(i, j, N);
				++ans2;
			}
		}
	}

	std::cout << ans1 << ' ' << ans2 << '\n';
	return(0);
}