// 실전 압축 성장 (브루트포스편)
// 숫자 정사각형

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
							// cout << "넓이는 " << pow(interval + 1, 2.) << "\n";
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

// 맞았습니다! 긴 한데 더 직관적인 방법 생각해보기