// 9. �⺻ ����2 - 3�ܰ�
// ���μ�����

#include <iostream>

int main() {

	int N;
	std::cin >> N;

	for (int i = 2; i <= N;) {
		
		if (N % i == 0) {

			std::cout << i << '\n';
			N /= i;
		}

		else i++;
	}
}

// �¾ҽ��ϴ�!!