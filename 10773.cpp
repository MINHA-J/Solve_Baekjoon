// 실전 압축 성장 (구현편)
// 제로

#include <iostream>
#include <vector>
using namespace std;

vector<int> W_data;

int main() {

	int K;
	cin >> K;

	for (int i = 0; i < K; i++) {

		int n;
		cin >> n;

		if (n == 0 && W_data.size() != 0) W_data.pop_back();
		else W_data.push_back(n);
	}

	long int result = NULL;

	for (int j = 0; j < W_data.size(); j++) {

		result += W_data[j];
	}

	cout << result;
}

// 맞았습니다!!
