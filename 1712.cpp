// 8. �⺻ ����1 - 1�ܰ�
// ���ͺб���

#include <iostream>
int main() {
	long long int A, B, C;
	long long int n = 0;

	std::cin >> A >> B >> C;
	
	while (true) {

		if ((C - B) < 0) {

			std::cout << -1;
			break;

		}

		if ((C - B) * n > A) {

			std::cout << n;
			break;

		}

		n++;

	}
}

// �ð� �ʰ� 

	
