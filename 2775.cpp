// 8. �⺻ ����1 - 6�ܰ�
// �γ�ȸ���� ���׾�

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

// �������α׷��� �غ����� �ߴµ�