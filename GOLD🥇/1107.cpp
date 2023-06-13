/* 리모컨 */

#include <iostream>

bool isBroken[10] = {false, };
int start = 100;

inline int number(int N){
	int cnt(0);

	if (N == 0) return (1);
	while (N){
		N /= 10;
		++cnt;
	}
	return (cnt);
}

inline int myAbs(int x, int y){
	return ((x < y) ? y - x : x - y);
}

inline int myMin(int x, int y){
	return ((x < y) ? x : y);
}

inline int check(int n){
	int cnt(0);

	if (n == 0){
		if (isBroken[0]) return (0);
		else return (1);
	}
	while (n){
		if (isBroken[n % 10]) return (0);
		n /= 10;
		++cnt;
	}
	return (cnt);
}

int main(void){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	int N(0), M(0), input(0), ans(0), direct(0), ckt(0);
	std::cin >> N >> M;

	for (int i = 0; i < M; ++i){
		std::cin >> input;
		isBroken[input] = true;
	}
	direct = myAbs(N, start);
	if (N == start) ;
	else if (M == 0) ans = myMin(number(N), direct);
	else if (M == 10) ans = direct;
	else{
		ans = direct;
		for (int i = 0; i < 1000000; ++i){
			ckt = check(i);
			if (ckt == 0) continue;
			ans = myMin(ans, ckt + myAbs(N, i));
		}
	}
	std::cout << ans << '\n';
	return(0);
}