// 8. 기본 수학1 - 1단계
// 손익분기점
#include <iostream>

int main() {

	long long int A, B, C;

	std::cin >> A >> B >> C;

	if ((C - B) <= 0) {

		std::cout << -1;

	}

	else {

		long long int n = A / (C - B);
		std::cout << n + 1;

	}

	return 0;

}