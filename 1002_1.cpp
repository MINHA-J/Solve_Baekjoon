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

		if (x1 == x2 && y1 == y2) {

			if (r1 == r2) std::cout << -1 << "\n"; // ������ ��ĥ ���
			else std::cout << 0 << '\n'; // ��ġ�� ���� ���
		}

		else {

			int d;
			d = pow(x1 - x2, 2.) + pow(y1 - y2, 2.);

			// �� ���� 2���� ������ ���� ���
			if (pow(abs(r1 - r2), 2.) < d && pow(r1 + r2, 2.) > d) {

				std::cout << 2 << "\n";
			}

			else {
				// �� ���� �ٸ� ���� ���ԵǴ� ���
				if (pow(abs(r1 - r2), 2.) > d) std::cout << 0 << "\n";

				// �� ���� 1���� ������ ���� ���
				if (pow(r1 + r2, 2.) == d) std::cout << 1 << "\n";
				
				// �ƴϸ� ������ ������ �ʴ´�.
				else std::cout << 0 << "\n";
			}
		}
	}
}