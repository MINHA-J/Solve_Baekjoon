// 8. �⺻ ����1 - 4�ܰ�
// �����̴� �ö󰡰� �ʹ�

#include<iostream>

int main() {
	long long int A, B, V, N;
	std::cin >> A >> B >> V;

	V -= A;

	N = V / (A - B);

	if (V % (A - B) != 0)
		std::cout << N + 2;

	else std::cout << N + 1;

}

// �ٵ� ��Ȯ�� ���ظ� ���� ������,,