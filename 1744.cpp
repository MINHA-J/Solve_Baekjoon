// 실전압축성장 (그리디 알고리즘 편)
// 수 묶기

#include <iostream>
#include<algorithm>
#include <vector>
using namespace std;

int main() {

	int N;
	cin >> N;

	vector<int> puls;
	vector<int> minus;
	bool zero = false;

	for (int i = 0; i < N; i++) {

		int x;
		cin >> x;

		if (x > 0) puls.push_back(x);
		if (x < 0) minus.push_back(x);
		if (x == 0) zero = true;
	}

	sort(puls.begin(), puls.end());
	sort(minus.begin(), minus.end());

	int result = NULL;

	if (puls.size() % 2 == 0) {

		for (int i = 2; i < puls.size() - 1; i++) {

			result += puls[i] * puls[i + 1];
		}

		if (puls[0] == 0) 
			result += puls[1];

		else 
			result += puls[0] * puls[1];
	}

	else {

		for (int i = 1; i < puls.size() - 1; i++) {

			result += puls[i] * puls[i + 1];
		}

		if (puls[0] != 0) result += puls[0];

	}

	if (minus.size() % 2 == 0) {

		for (int i = 0; i < minus.size() - 1; i++) {

			result += minus[i] * minus[i + 1];
		}
	}

	else {

		for (int i = 1; i < minus.size() - 1; i++) {

			result += minus[i] * minus[i + 1];
		}

		if (puls[0] == 0) result += 0;

		else result += minus[0];

	}

	cout << result;
}