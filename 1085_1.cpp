// 9. �⺻ ����2 - 7�ܰ�
// ���簢������ Ż��

#include <iostream>

int main() {

	int x, y, w, h;
	std::cin >> x >> y >> w >> h;

	if (x <= w / 2. && y <= h / 2.) {

		if (x < y) std::cout << x;
		else std::cout << y;
	}

	if (x > w / 2. && y > h / 2.) {

		if (w - x < h - y) std::cout << w - x;
		else std::cout << h - y;
	}

	else {

		if (x <= w / 2.) {
			if (x < h - y) std::cout << x;
			else std::cout << h - y;
		}

		if (x > w / 2.) {
			if (y < w - x) std::cout << y;
			else std::cout << w - x;
		}
	}
}