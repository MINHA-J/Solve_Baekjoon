// 실전압축성장 (그리디 알고리즘 편)
// 병든 나이트

#include <iostream>
#include <algorithm>
using namespace std;

int N, M;

int main() {

	cin >> N >> M;

	if (N == 1) cout << 1;

	else if (N == 2) cout << min(4, (M + 1) / 2);

	else if (N >= 3) {

		if (M <= 6) cout << min(4, M);

		else cout << M - 2;
	}

	return 0;
}

// 다른 사람 코드,, 