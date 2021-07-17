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

		if (x1 == x2 && y1 == y2) {

			if (r1 == r2) std::cout << -1 << "\n"; // 완전히 겹칠 경우
			else std::cout << 0 << '\n'; // 겹치지 않을 경우
		}

		else {

			int d;
			d = pow(x1 - x2, 2.) + pow(y1 - y2, 2.);

			// 두 원이 2개의 교점을 가질 경우
			if (pow(abs(r1 - r2), 2.) < d && pow(r1 + r2, 2.) > d) {

				std::cout << 2 << "\n";
			}

			else {
				// 한 원이 다른 원에 포함되는 경우
				if (pow(abs(r1 - r2), 2.) > d) std::cout << 0 << "\n";

				// 두 원이 1개의 교점을 가질 경우
				if (pow(r1 + r2, 2.) == d) std::cout << 1 << "\n";
				
				// 아니면 교점을 가지지 않는다.
				else std::cout << 0 << "\n";
			}
		}
	}
}