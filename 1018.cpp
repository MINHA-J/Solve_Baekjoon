// 실전 압축 성장 (브루트포스편)
// 체스판 다시 칠하기

// I don't know

#include <iostream>
#include <vector>
using namespace std;

int N, M;
vector<string> board;


int Chess(vector<string> data) {

	int Draw = 0, minDraw = M * N, cur, depth;

	for (int k = 0; k < M - 7; k++) {

		for (int j = k; j <= k + 7; j++) {

			depth = 0;

			for (int i = 0; i < N - 8 && i < 8; i++) {

				int start = data[j][i];

				if (depth = 0) cur = data[k][i];

				else if (depth % 2 == 0) {

					if (cur == data[k][i + 1]) {
						Draw++;
						i++;
					}
				}

				else 
			}
		}

		if (Draw < minDraw) minDraw = Draw;
	}

	return minDraw;
}


int main() {

	cin >> N >> M;

	for (int i = 0; i < M; i++) {

		string line;
		cin >> line;

		board.push_back(line);
	}

	cout << Chess(board);
	return 0;
}

// 포기,, 낼 다시 한다