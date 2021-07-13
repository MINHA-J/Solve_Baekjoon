// 9. 기본 수학2 - 5단계
// 베르트랑 공준

#include <iostream>

void prime(int n) {

	int a[123456];

	for (int i = 2; i <= n; i++) a[i] = i;

	for (int i = 2; i <= n; i++) {
		if (a[i] == 0) continue;

		for (int j = 2 * i; j <= n; j += i) a[j] = 0;
	}

	int N = 0;
	for (int i = 2; i <= n; i++) {
		if (a[i] != 0) N++;
	}
	
	std::cout << N << '\n';
}

int main() {

	while (true) {
		int n;
		std::cin >> n;

		if (n == 0) break;
		else prime(n);
	}
}

// 오잉,,, *^^