// 8. 기본 수학1 - 7단계
// 설탕 배달

#include <iostream>

int main() {

	int N, n = 0;
	std::cin >> N;

	for (int i = N; i >= 0;) {

		if ((i > 0) && (i < 3)) {
			std::cout << -1;
			break;
		}

		if ((i == 3)||(i == 6)||(i == 9)||(i == 12)) {
			n += i / 3;
			std::cout << n;
			break;
		}

		if ((i > 3) && (i < 5)) {
			i -= 3;
			n++;
		}

		if (i >= 5) {
			i -= 5;
			n++;
		}

		if (i == 0) {
			std::cout << n;
			break;
		}
	}
}

// 정답!