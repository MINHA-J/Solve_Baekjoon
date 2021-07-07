// 8. 기본 수학1 - 2단계
// 벌집

#include <iostream>

int main() {

	long long int N, n = 0, i = 0; // i=1 -> 틀렸습니다
	std::cin >> N;

	while (true) {
		n += (i * 6);

		if (N <=  n + 1) { // N < -> 틀렸습니다
			std::cout << i + 1;
			break;
		}

		i++;
	}

	return 0;
}