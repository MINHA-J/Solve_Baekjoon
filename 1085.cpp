// 9. 기본 수학2 - 7단계
// 직사각형에서 탈출

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

// 반례 발견
// 1 4 3 6  -> 2(답은 1)