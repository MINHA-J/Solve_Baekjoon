// 8. �⺻ ����1 - 4�ܰ�
// �����̴� �ö󰡰� �ʹ�

#include<iostream>

int main() {

	long long int A, B, V, n = 0, N = 0;
	std::cin >> A >> B >> V;

	for (n = 1; true; n++) {

		V -= A;

		if (V <= 0) {
			std::cout << n;
			break;
		}
		
		V += B;
		
	}
}

// �ð� �ʰ�
