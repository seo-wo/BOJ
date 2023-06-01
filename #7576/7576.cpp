#include <iostream>
#include <queue>

int box[1001][1001];
bool check[1001][1001];
int dx[] = {-1, 0, 1, 0};
int dy[] = {0 , -1, 0 , 1};

int main(void){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);

	int width(0), height(0), tomato(0), day(0), total(0), done(0);
	std::queue<std::pair<int, int> > q;

	std::cin >> width >> height;
	for (int i = 0; i < height; ++i){
		for (int j = 0; j < width; ++j){
			std::cin >> tomato;
			box[i][j] = tomato;
			if (tomato == 1){
				q.push(std::make_pair(i, j));
				check[i][j] = true;
				++done;
				++total;
			}else if (tomato == 0)
				++total;
		}
	}

	//bfs
	int x(0), y(0), new_tomato(0), temp_done(done);
	while (!q.empty()){
		std::pair<int, int> cur = q.front();
		q.pop();
		for (int i = 0; i < 4; ++i){
			x = cur.first + dx[i];
			y = cur.second + dy[i];
			if (x < 0 || x >= height || y < 0 || y >= width)
				continue;
			if (check[x][y] || box[x][y] == -1)
				continue;
			box[x][y] = 1;
			check[x][y] = true;
			++done;
			++new_tomato;
			q.push(std::make_pair(x, y));
		}
		--temp_done;
		if (temp_done == 0){
			temp_done = new_tomato;
			new_tomato = 0;
			++day;
		}
	}
	--day;
	// ans
	if (total != done)
		std::cout << -1;
	else
		std::cout << day;
	return (0);
}