// 9. 기본 수학2 - 5단계
// 베르트랑 공준

#include <iostream>
#include <stdio.h>

void prime(int n) {

	int prime_num = 0;
	for (int i = n + 1; i <= 2 * n; i++) {

		int k = 1;

		for (int j = 2; j < i; j++) {

			if (i % j == 0 && i > 1) {

				k = j;
				break;
			}
		}

		if (k == 1) prime_num++;
	}

	printf("%d\n", prime_num);
}

int main() {

	while (true) {
		int n;
		std::cin >> n;

		if (n == 0) break;
		else prime(n);
	}
}

// 시간 초과,,
// 1929번 에라토스테네스의 체 참고해야한다.