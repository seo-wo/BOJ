#include <iostream>

int data[41];

int fibo(int n){
	if (n == 0){
		data[0] = 0;
		return (0);
	}
	else if (n == 1){
		data[1] = 1;
		return (1);
	}
	else if (data[n] != 0){
		return (data[n]);
	}
	else{
		data[n] = fibo(n-1) + fibo(n-2);
		return (data[n]);
	}
}

int main(void){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	int T(0), num(0);
	std::cin >> T;
	while(T){
		std::cin >> num;
		if (num == 0)
			std::cout << "1 0\n";
		else{
			fibo(num);
			std::cout << data[num-1] << ' ' << data[num] <<'\n';
		}
		--T;
	}
	return (0);
}
