// 9. �⺻ ����2 - 7�ܰ�
// ���簢������ Ż��

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

// �¾ҽ��ϴ�!!