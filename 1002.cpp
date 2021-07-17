// 9. 기본 수학2 - 11단계
// 터렛

#include <iostream>
#include <math.h>
using namespace std;


int main() {

	int T;
	cin >> T;

	for (int i = 0; i < T; i++) {

		int x1, y1, r1, x2, y2, r2;
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

		if (x1 == x2 && y1 == y2) {

			if (r1 == r2) std::cout << -1 << "\n";
			else std::cout << 0 << '\n';
		}

		else {

			int n;
			n = pow(x1 - x2, 2.) + pow(y1 - y2, 2.);

			if (pow(r1 + r2, 2.) == n) std::cout << 1 << "\n";
			else if (pow(r1 + r2, 2.) > sqrt(n)) std::cout << 2 << "\n";
			else if (pow(r1 + r2, 2.) < sqrt(n)) std::cout << 0 << "\n";
		}
	}
}