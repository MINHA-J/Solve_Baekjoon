// 8. �⺻ ����1 - 5�ܰ�
// ACM ȣ��

#include <iostream>

int main() {
	int T, H, W, N;

	std::cin >> T;

	for (T; T > 0; T--) {

		std::cin >> H >> W >> N;
		int H1, W1;
		H1 = N % H;
		W1 = N / H;

		if (H1 > 0)
			W1++;
		else H1 = H;

		std::cout << H1 *100 + W1<< '\n'; // ���� ���� ���ؼ� Ʋ��

	}

}

// �� ����� ���� �� ��츦 �������� �ʾƼ� Ʋ�� ��