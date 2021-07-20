// 실전압축성장 (그리디 알고리즘)
// 신입사원

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


vector<int> Score;
vector<int> Score2;

int main() {

	int T;
	cin >> T;

	for (int i = 0; i < T; i++) {


		int N;
		cin >> N;

		vector<vector<int>> TotalScore(N, vector<int>(2, 0));

		for (int i = 0; i < N; i++) {
			int score1, score2;
			cin >> score1 >> score2;

			Score.push_back(score1);
			Score.push_back(score2);

			TotalScore.push_back(Score);
			Score.clear();
		}

		sort(TotalScore.begin(), TotalScore.end());

		for (int k = 0; k < N; k++) {

			if (k == 0) {
				Score2.push_back(TotalScore[k][1]);
			}

			else {

				bool better = true;

				for (int j = 0; j < Score2.size(); j++) {

					if (TotalScore[k][1] > Score2[j]) {
						better = false;
						break;
					}
				}

				if (better == true) 
					Score2.push_back(TotalScore[k][1]);
			}
		}

		cout << Score2.size() << "\n";
		Score2.clear();
	}
	
}

	
