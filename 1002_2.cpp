// 9. �⺻ ����2 - 11�ܰ�
// �ͷ�

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
		
		// 1. ���� �� ������ ������ ���
		if (pow(abs(r1 - r2), 2.) < d && pow(r1 + r2, 2.) > d) {
			std::cout << 2 << "\n";
		}

		// 2. �� ���� ��ġ�ϴ� ���
		if (d == 0 && r1 == r2) {
			std::cout << -1 << "\n";
		}

		// 3. �� ���� �����ϴ� ���
		if (d == pow(r1 + r2, 2.)) {
			std::cout << 1 << "\n";
		}

		// 4. �� ���� �����ϴ� ���
		if (d == pow(abs(r1 - r2), 2.) && d != 0) {
			std::cout << 1 << "\n";
		}

		// 5. �ϳ��� ���� �ٸ� ���� �����ϴ� ���
		if (d < pow(abs(r1 - r2), 2.)) {
			std::cout << 0 << "\n";
		}

		// 6. �� ���� �ָ� ������ ������ �ʴ� ���
		if (d > pow(r1 + r2, 2.)) {
			std::cout << 0 << "\n";
		}
	}
}