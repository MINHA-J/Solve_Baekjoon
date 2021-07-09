// 9. 기본 수학2 - 1단계
// 소수 찾기

#include <iostream>

int main() {

	int N, prime = 0;
	std::cin >> N;

	for (int i = N; i > 0; i--) {

		int n, GCD = 1;
		std::cin >> n;

		for (int j = 1; j < n; j++) {
			if (n % j == 0)
				GCD = j;
		}

		if ((n != 1) && (GCD == 1))
			prime++;
	}

	std::cout << prime;
}

// 맞았습니다!!