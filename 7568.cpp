// 실전 압축 성장 (브루트포스편)
// 덩치

#include <iostream>
#include <vector>
using namespace std;

int main() {

	int N;
	cin >> N;

	vector<vector<int>> Man;
	vector<int> score(N);

	for (int i = 0; i < N; i++) {
		int x, y;
		cin >> x >> y;

		Man.push_back({ x, y });
	}

	for (int j = 0; j < Man.size(); j++) {

		for (int k = 0; k < Man.size(); k++) {

			if (j != k) {

				if (Man[j][0] < Man[k][0] && Man[j][1] < Man[k][1]) {

					score[j] += 1;
				}
			}
		}
	}

	for (int elem : score) {

		cout << elem+1 << " ";
	}

	return 0;
}

// 맞았습니다!