// 8. �⺻ ����1 - 3�ܰ�
// �м� ã��

#include <iostream>

long long int X;
int x = 1, n = 1;

int main() {

	std::cin >> X;

	for (int i = 2; true; i++) {

		if (X == 1) break;

		x += i;
		n++;

		if (x >= X) break;
	}

	int numerator, denominator;

	if (n % 2 == 0) {

		numerator = n;
		denominator = 1;

		for (int f = x - X; f > 0; f--) {

			numerator--;
			denominator++;
		}
	}

	else {
		numerator = 1;
		denominator = n;

		for (int f = x - X; f > 0; f--) {

			numerator++;
			denominator--;
		}
	}

	std::cout << numerator << "/" << denominator;
}

// �¾ҽ��ϴ�!
// ��Ģ�� ���۸��ؼ� ��� �����ϰ� �ڵ� �ۼ���.