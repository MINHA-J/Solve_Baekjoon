// 9. 기본 수학2 - 3단계
// 소인수분해

#include <iostream>

int main() {

	int N;
	std::cin >> N;

	for (int i = 2; i <= N;) {
		
		if (N % i == 0) {

			std::cout << i << '\n';
			N /= i;
		}

		else i++;
	}
}

// 맞았습니다!!