// 실전압축성장 (그리디 알고리즘)
// 신입사원

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {

	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {

		int max = 0, New = 0;
		int N;
		cin >> N;

		pair<int, int> p[100001];

		for (int i = 0; i < N; i++) {
			cin >> p[i].first >> p[i].second;
		}

		sort(p, p + N);

		for (int k = 0; k < N; k++) {

			if (k == 0) {
				
				max = p[k].second;
				New++;
			}

			else {

				if (max > p[k].second) {
					max = p[k].second;
					New++;
				}
			}
		}

		cout << New << "\n";
	}
}