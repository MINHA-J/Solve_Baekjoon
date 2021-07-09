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

		if ((i >= 3) && (i < 5)) {
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
// 이렇게 하니까 3으로만 구성되는 경우가 안 세진다.