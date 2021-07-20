// 실전압축성장 (그리디 알고리즘)
// 신입사원

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> Score2;

int main() {

	int T;
	cin >> T;

	for (int i = 0; i < T; i++) {


		int N;
		cin >> N;

		pair<int, int> p[100001];

		for (int i = 0; i < N; i++) {
			cin >> p[i].first >> p[i].second;
		}

		sort(p, p + N);

		for (int k = 0; k < N; k++) {

			if (k == 0) {
				Score2.push_back(p[k].second);
			}

			else {

				bool better = true;

				for (int j = 0; j < Score2.size(); j++) {

					if (p[k].second > Score2[j]) {
						better = false;
						break;
					}
				}

				if (better == true)
					Score2.push_back(p[k].second);
			}
		}

		cout << Score2.size() << "\n";
		Score2.clear();
	}

}

// 시간초과


