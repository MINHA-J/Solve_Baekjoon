// 9. 기본 수학2 - 4단계
// 소수 구하기

#include <iostream>
#include <cmath>
int main() {

	int M, N;
	std::cin >> M >> N;

	for (int i = M; i <= N; i++) {

		int gcd = 1;

		if ((i > 1) && (i <= 3)) {

			std::cout << i << '\n';
		}

		if (i > 3) {

			for (int j = 2; j < std::sqrt(i); j++) {

				if (i % j == 0)
					gcd = j;

				if ((j > 2) && (gcd == 1)) {
					std::cout << i << '\n';
					break;
				}
			}
		}
	}
}