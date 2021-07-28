// ���� ���� ���� (���Ʈ������)
// ���� ���簢��

#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

vector<string> rectangle;
int N, M;

int square(vector<string> data) {

	int size = 1, interval = 1;

	for (int top = 0; top < N - 1; top++) {

		for (int i = 0; i < M - 1; i++) {

			for (int j = i + 1; j - i <= N - top && j < M; j++) {

				interval = j - i;
				if (data[top][i] == data[top][j]) {
					// cout << data[top][i] << "\n";

					if (top + interval < N) {

						if (data[top][i] == data[top + interval][i] &&
							data[top + interval][i] == data[top + interval][j]) {
							// cout << "���̴� " << pow(interval + 1, 2.) << "\n";
							if (size < pow(interval + 1, 2.)) size = pow(interval + 1, 2.);
						}
					}
				}
			}
		}
	}

	return size;
}

int main() {

	cin >> N >> M;

	for (int i = 0; i < N; i++) {

		string number;
		cin >> number;

		rectangle.push_back(number);
	}

	cout<< square(rectangle);
	return 0;
}

// �¾ҽ��ϴ�! �� �ѵ� �� �������� ��� �����غ���