// 9. �⺻ ����2 - 7�ܰ�
// ���簢������ Ż��

#include <iostream>

int main() {

	int x, y, w, h;
	std::cin >> x >> y >> w >> h;

	if (x > w / 2. || y > h / 2.) {

		if (w - x < h - y) std::cout << w - x;
		if (w - x >= h - y) std::cout << h - y;
	}

	else {
		if (x < y) std::cout << x;
		if (x >= y) std::cout << y;
	}
}

// �ݷ� �߰�
// 1 4 3 6  -> 2(���� 1)