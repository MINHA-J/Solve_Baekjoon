// 9. �⺻ ����2 - 5�ܰ�
// ����Ʈ�� ����

#include <iostream>
#include <stdio.h>

void prime(int n) {

	int prime_num = 0;
	for (int i = n + 1; i <= 2 * n; i++) {

		int k = 1;

		for (int j = 2; j < i; j++) {

			if (i % j == 0 && i > 1) {

				k = j;
				break;
			}
		}

		if (k == 1) prime_num++;
	}

	printf("%d\n", prime_num);
}

int main() {

	while (true) {
		int n;
		std::cin >> n;

		if (n == 0) break;
		else prime(n);
	}
}

// �ð� �ʰ�,,
// 1929�� �����佺�׳׽��� ü �����ؾ��Ѵ�.