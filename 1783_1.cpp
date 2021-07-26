// 실전압축성장 (그리디 알고리즘 편)
// 병든 나이트

#include <iostream>
using namespace std;
int main() {

	int N, M;
	cin >> N >> M;

	int visited = 0;


	if (N == 1) {

		visited++;
	}

	else if (N == 2) {

		M--; visited++;

		for (int i = 1; i < 4 && M > 1; i++) {

			M -= 2;
			visited++;
		}
	}

	else if (N >= 3) {

		if (M >= 7) {

			visited += 5;
			M -= 7;
			
			while (M > 0) {

				visited++;
				M -= 1;
			}
		}

		else {

			visited++;

			for (int i = 1; i < 4 && M > 0; i++) {

				visited++;
				M -= 1;
			}
		}
	}

	cout << visited;
}