// 9. 기본 수학2 - 2단계
// 소수

#include <iostream>

bool is_prime(int n) {

	int prime = 1;

	for (int i = 2; i < n; i++) {

		if (n % i == 0) {
			prime = i;
			return false;
		}
	}

	if (prime == 1) return true;
}

int main() {

	int M, N;
	std::cin >> M >> N;

	int total = 0, min = 0;

	for (int i = M; i <= N; i++) {

		if (is_prime(i) && i > 1) { // 1이 소수로 세지는 경우가 있어
			total += i;				// 처음에 틀렸었다
			if (min == 0) min = i;
		}
	}

	if (min == 0) std::cout << -1;
	else std::cout << total << '\n' << min;
}

// 맞았습니다!!