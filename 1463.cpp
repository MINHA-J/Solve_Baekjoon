// �������༺��(DP��)
// 1�� �����

#include <iostream>

int main() {
	int N, n = 0;
	std::cin >> N;

	while (N != 1) {

		if ((N % 2 == 0) && (N - 1) % 3 != 0) {

			N /= 2;
			n++;
		}

		if ((N % 3 != 0) && (N != 1)) {

			N -= 1;
			n++;
		}

		if (N % 3 == 0) {

			N /= 3;
			n++;
		}
	}

	std::cout << n;
}

// ��� ���� �°� ��µǴµ�,, �ڲٸ� Ʋ�ȴٰ� ��