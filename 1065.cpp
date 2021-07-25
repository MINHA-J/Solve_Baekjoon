// 실전 압축 성장 (브루트포스편)
// 한수

#include <iostream>
using namespace std;

int main() {

	int N;
	cin >> N;

	int AP = 0;

	if (N < 100) 
		AP += N;

	else {

		AP += 99;

		int A = N / 100; // 백의 자리 수

		for (int i = A - 1; i > 0; i--) {

			AP += 5;
		}

		if (A % 2 == 0) {

			int C = 0;
			int now = A * 100 + ((A + C) / 2) * 10 + C;

			while (now <= N && C <10) { // 여기 일의 자리 수 <10 조건 추가하니까 통과함

				AP++;
				C += 2;
				now = A * 100 + ((A + C) / 2) * 10 + C;
			}
		}

		else if (A % 2 != 0) {

			int C = 1;
			int now = A * 100 + ((A + C) / 2) * 10 + C;

			while (now <= N && C < 10) {

				AP++;
				C += 2;
				now = A * 100 + ((A + C) / 2) * 10 + C;
			}
		}
	}

	cout << AP;
}

// 도대체 왜 앞의 시도는 틀렸다고 나오는지 모를 일,,