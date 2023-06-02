#include <iostream>
#include <queue>

int box[101][101][101];
bool check[101][101][101];
int dx[] = {-1, 0, 1, 0, 0, 0};
int dy[] = {0 , -1, 0 , 1, 0, 0};
int dz[] = {0, 0, 0, 0, 1, -1};

typedef struct t_xyz
{
	int x;
	int y;
	int z;
}xyz;

t_xyz func(int x, int y, int z){
	t_xyz temp;

	temp.x = x;
	temp.y = y;
	temp.z = z;
	return (temp);
}

int main(void){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);

	int X(0), Y(0), Z(0), tomato(0), day(0), total(0), done(0);
	std::queue<t_xyz> q;

	std::cin >> X >> Y >> Z;
	
	for (int z = 0; z < Z; ++z){
		for (int y = 0; y < Y; ++y){
			for (int x = 0; x < X; ++x){
				std::cin >> tomato;
				box[z][y][x] = tomato;
				if (tomato == 1){
					q.push(func(x,y,z));
					check[z][y][x] = true;
					++done;
					++total;
				} else if (tomato == 0)
					++total;
			}
		}
	}

	//bfs
	int x(0), y(0), z(0), new_tomato(0), temp_done(done);
	while (!q.empty()){
		t_xyz cur = q.front();
		q.pop();
		for (int i = 0; i < 6; ++i){
			x = cur.x + dx[i];
			y = cur.y + dy[i];
			z = cur.z + dz[i];
			if (x < 0 || x >= X || y < 0 || y >= Y || z < 0 || z >= Z)
				continue;
			if (check[z][y][x] || box[z][y][x] == -1)
				continue;
			box[z][y][x] = 1;
			check[z][y][x] = true;
			++done;
			++new_tomato;
			q.push(func(x,y,z));
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