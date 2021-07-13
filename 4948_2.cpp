// 9. 기본 수학2 - 5단계
// 베르트랑 공준

#include <iostream>

int a[123456];

void prime(int n) {

	int prime_num = 0;

	for (int i = 0; i <= 2 * n; i++) a[i] = 0;

	for (int k = 2; k <= 2 * n; k++) {

		if (a[k] == 0) {
			a[k] = 0;
		}

		for (int j = k * 2; j <= 2 * n; j += k) {

			if (a[j] != 1) a[j] = 1;
		}
	}

	for (int i = n + 1; i <= 2 * n; i++) {
		if (a[i] == 0) prime_num++;
	}

	std::cout << prime_num << '\n';
}

int main() {

	while (true) {
		int n;
		std::cin >> n;

		if (n == 0) break;
		else prime(n);
	}

	return 0;
}

// 다른 사람 코드,,