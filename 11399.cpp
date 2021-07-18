// 실전압축성장 (그리디알고리즘편)
// ATM

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	int N;
	cin >> N;

	vector<int> time;

	for (int i = 0; i < N; i++) {

		int P;
		cin >> P;

		time.push_back(P);
	}

	sort(time.begin(), time.end());

	for (int k = 1; k < N; k++) {

		time[k] += time[k-1];
	}

	int total = 0;

	for (int j = 0; j < N; j++) {

		total += time[j];
	}

	cout << total;
}
