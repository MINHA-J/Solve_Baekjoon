// 9. �⺻ ����2 - 4�ܰ�
// �Ҽ� ���ϱ�

#include <iostream>
#include <cmath>

int main() {

	int M, N;
	std::cin >> M >> N;

	bool* arr = new bool[N + 1];

	for (int i = 0; i < N + 1; i++) {
		arr[i] = true;
	}

	int j;

	for (int i = 2; i < N + 1; i++) {

		if (arr[i]) {

			if ((unsigned int)pow(i, 2) > 1000001) {

				break;
			}

			else {

				for (j = (int)pow(i, 2); j < N + 1;) {
					
					arr[j] = false;
					j = j + i;
				}
			}
		}
	}

	if (M == 1) M++;

	for (int i = M; i < N + 1; i++) {

		if (arr[i] && i >= M)
			std::cout << i << '\n';
	}

	delete[]arr;
}