// 실전압축성장 (구현편)
// 쉽게 푸는 문제

// OK!!

#include <iostream>
#include <vector>
using namespace std;

int main() {

	cin.tie(NULL);
	ios::sync_with_stdio(false);

	vector<int> easyNum;

	int result = NULL, A, B;
	cin >> A >> B;

	for (int i = 1, end = B; end > 0; i++) {

		for (int j = i; j > 0; j--) {

			easyNum.push_back(i);
			end--;
		}
	}

	for (int i = A - 1; i < B; i++)
		result += easyNum[i];

	cout << result;
}