// 실전압축성장(그리디알고리즘편)
// 회의실 배정

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

vector<vector<long int>> V;

void Room(long int a, long int b) {

	vector<long int> time = { b, a };

	V.push_back(time);
}


int get_Room(vector<vector<long int>> vector) {

	sort(V.begin(), V.end()); // 끝나는 시간 기준으로 정렬함

	int n = 1; // 첫번째 시간 카운팅
	int start = V[0][1], finish = V[0][0];

	for (int i = 1; i < V.size(); i++) { // 엇 이거 0 -> 1로 수정하니까 맞음

		if (finish <= V[i][1]) {
			n++;
			finish = V[i][0];
			start = V[i][1];
		}
	}
	return n;
}

int main() {

	int T, k, n;
	std::cin >> T;

	for (int i = 0; i < T; i++) {

		std::cin >> k >> n;
		Room(k, n);
	}

	std::cout << get_Room(V);
}

// 맞았습니다!! 4트만에,, *^^