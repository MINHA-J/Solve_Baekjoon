// ���� ���� ���� (���Ʈ������)
// �Ѽ�

#include <iostream>
using namespace std;

int main() {

	int N;
	cin >> N;

	int AP = 0;

	if (N < 100) 
		AP += N;

	else {

		AP += 99;

		int A = N / 100; // ���� �ڸ� ��

		for (int i = A - 1; i > 0; i--) {

			AP += 5;
		}

		if (A % 2 == 0) {

			int C = 0;
			int now = A * 100 + ((A + C) / 2) * 10 + C;

			while (now <= N && C <10) { // ���� ���� �ڸ� �� <10 ���� �߰��ϴϱ� �����

				AP++;
				C += 2;
				now = A * 100 + ((A + C) / 2) * 10 + C;
			}
		}

		else if (A % 2 != 0) {

			int C = 1;
			int now = A * 100 + ((A + C) / 2) * 10 + C;

			while (now <= N && C < 10) {

				AP++;
				C += 2;
				now = A * 100 + ((A + C) / 2) * 10 + C;
			}
		}
	}

	cout << AP;
}

// ����ü �� ���� �õ��� Ʋ�ȴٰ� �������� �� ��,,