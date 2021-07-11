// 실전압축성장(DP편)
// 1로 만들기

#include <iostream>
using namespace std;

// 한 번 계산된 결과를 Memoization 하기 위한 리스트 초기화
int d[1000001];

// Top-down 방식 (재귀 함수)
/*
int go(int n) {

	if (n == 1) return 0;
	if (d[n] > 0) return d[n];

	d[n] = go(n - 1) + 1; // -1 하고 저장

	if (n % 2 == 0) {
		int temp = go(n / 2) + 1; // 2로 나눠지면, -1한 경우와 비교한다.
		if (d[n] > temp) d[n] = temp;
	}

	if (n % 3 == 0) {
		int temp = go(n / 3) + 1; // 3로 나눠지면, -1한 경우와 비교한다.
		if (d[n] > temp) d[n] = temp;
	}

	return d[n];
}
*/

// Bottom-up 방식 (반복문)
int go(int n) {

	d[1] = 0;

	for (int i = 2; i <= n; i++) {

		d[i] = d[i - 1] + 1;

		if (i % 2 == 0 && d[i] > d[i / 2] + 1) {
			d[i] = d[i / 2] + 1;
		}

		if (i % 3 == 0 && d[i] > d[i / 3] + 1) {
			d[i] = d[i / 3] + 1;
		}
	}

	return d[n];
}

int main() {

	int N;
	cin >> N;
	cout << go(N);
}
