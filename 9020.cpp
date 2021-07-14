// 9. 기본 수학2 - 6단계
// 골드바흐의 추측

#include <iostream>
#include <vector>

int a[100001];

void plus_prime(std::vector<int> v, int N) {

	int a, b, pair = 0;

	for (int i = 0; i < v.size(); i++) {
		
		int n = N - v[i];

		for (int j = i; j < v.size(); j++) {

			if (n == v[j]) {

				pair++;

				if (pair = 1) {

					a = v[i];
					b = n;
				}

				if (pair > 1) {

					if (n - v[i] < b - a) {
						a = v[i];
						b = n;
					}
				}
			}
		}
	}

	std::cout << a << " " << b << '\n';
}

void prime(int n) {

	std::vector<int> v;

	for (int i = 2; i <= n; i++) a[i] = i;

	for (int i = 2; i <= n; i++) {

		if (a[i] == 0) continue;
		for (int j = i * 2; j <= n; j += i) a[j] = 0;
	}

	for (int i = 2; i <= n; i++) {

		if (a[i] != 0) v.push_back(a[i]);
	}

	plus_prime(v, n);
}

int main() {

	int T;
	std::cin >> T;

	for (int i = 0; i < T; i++) {

		int n;
		std::cin >> n;

		prime(n);
	}

	return 0;
}