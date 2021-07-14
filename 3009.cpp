// 9. 기본 수학2 - 8단계
// 네 번째 점

#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> V;
int x, y;

int main() {

	for (int i = 0; i < 3; i++) {

		int a, b;
		cin >> a >> b;

		V.push_back({ a, b });
	}

	x = V[0][0];
	if (V[1][0] != V[2][0]) {
		if (x == V[1][0]) x = V[2][0];
		else x = V[1][0];
	}

	y = V[0][1];
	if (V[1][1] != V[2][1]) {
		if (y == V[1][1]) y = V[2][1];
		else y = V[1][1];
	}

	std::cout << x << " " << y;
}