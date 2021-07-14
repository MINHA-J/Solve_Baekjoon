// 9. 기본 수학2 - 7단계
// 직사각형에서 탈출

#include <iostream>

int main() {

	int x, y, w, h;
	int min;
	std::cin >> x >> y >> w >> h;

	int array[4];

	array[0] = x;
	array[1] = y;
	array[2] = w - x;
	array[3] = h - y;

	min = array[0];

	for (int i = 1; i < 4; i++) {

		if (min >= array[i]) min = array[i];
	}
	
	std::cout << min;
}

// 맞았습니다!!