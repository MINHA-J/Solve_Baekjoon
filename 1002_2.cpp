// 9. 기본 수학2 - 11단계
// 터렛

#include <iostream>
#include <math.h>
#include <cstdlib>
using namespace std;


int main() {

	int T;
	cin >> T;

	for (int i = 0; i < T; i++) {

		int x1, y1, r1, x2, y2, r2;
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

		int d;
		d = pow(x1 - x2, 2.) + pow(y1 - y2, 2.);
		
		// 1. 원이 두 점에서 만나는 경우
		if (pow(abs(r1 - r2), 2.) < d && pow(r1 + r2, 2.) > d) {
			std::cout << 2 << "\n";
		}

		// 2. 두 원이 일치하는 경우
		if (d == 0 && r1 == r2) {
			std::cout << -1 << "\n";
		}

		// 3. 두 원이 외접하는 경우
		if (d == pow(r1 + r2, 2.)) {
			std::cout << 1 << "\n";
		}

		// 4. 두 원이 내접하는 경우
		if (d == pow(abs(r1 - r2), 2.) && d != 0) {
			std::cout << 1 << "\n";
		}

		// 5. 하나의 원이 다른 원을 포함하는 경우
		if (d < pow(abs(r1 - r2), 2.)) {
			std::cout << 0 << "\n";
		}

		// 6. 두 원이 멀리 떨어져 만나지 않는 경우
		if (d > pow(r1 + r2, 2.)) {
			std::cout << 0 << "\n";
		}
	}
}