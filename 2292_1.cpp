// 8. �⺻ ����1 - 2�ܰ�
// ����

#include <iostream>

int main() {

	long long int N, n = 0, i = 0; // i=1 -> Ʋ�Ƚ��ϴ�
	std::cin >> N;

	while (true) {
		n += (i * 6);

		if (N <=  n + 1) { // N < -> Ʋ�Ƚ��ϴ�
			std::cout << i + 1;
			break;
		}

		i++;
	}

	return 0;
}