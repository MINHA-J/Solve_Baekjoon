// 실전압축성장(DP편)
// 1로 만들기

#include <iostream>

int main() {
	int N, n = 0;
	std::cin >> N;

	while (N != 1) {

		if ((N % 2 == 0) && (N - 1) % 3 != 0) {

			N /= 2;
			n++;
		}

		if ((N % 3 != 0) && (N != 1)) {

			N -= 1;
			n++;
		}

		if (N % 3 == 0) {

			N /= 3;
			n++;
		}
	}

	std::cout << n;
}

// 결과 값은 맞게 출력되는데,, 자꾸만 틀렸다고 함