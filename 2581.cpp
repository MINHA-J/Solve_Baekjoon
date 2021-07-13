// 9. �⺻ ����2 - 2�ܰ�
// �Ҽ�

#include <iostream>

bool is_prime(int n) {

	int prime = 1;

	for (int i = 2; i < n; i++) {

		if (n % i == 0) {
			prime = i;
			return false;
		}
	}

	if (prime == 1) return true;
}

int main() {

	int M, N;
	std::cin >> M >> N;

	int total = 0, min = 0;

	for (int i = M; i <= N; i++) {

		if (is_prime(i) && i > 1) { // 1�� �Ҽ��� ������ ��찡 �־�
			total += i;				// ó���� Ʋ�Ⱦ���
			if (min == 0) min = i;
		}
	}

	if (min == 0) std::cout << -1;
	else std::cout << total << '\n' << min;
}

// �¾ҽ��ϴ�!!