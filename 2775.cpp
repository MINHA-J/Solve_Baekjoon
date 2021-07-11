// 8. 기본 수학1 - 6단계
// 부녀회장이 될테야

#include <iostream>

int k, n;
int dp[100][15];

 int DP() {

	std::cin >> k;
	std::cin >> n;

	if (dp[k][n] != 0) return dp[k][n];

	int result= NULL;

	for (int i = 0; i < n; i++) {
		result += DP();
	}

	return dp[k][n] = result;
}

int main() {

	int T;
	std::cin >> T;

	for (int f = 0; f < T; f++)
		DP();
}

// 동적프로그래밍 해보려고 했는데