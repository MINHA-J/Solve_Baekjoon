// 실전압축성장(그리디알고리즘편)
// 회의실 배정

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

vector<vector<long int>> V;

void Room(long int a, long int b) {

	vector<long int> time = { a, b };
	
	V.push_back(time);
}

int get_Room(vector<vector<long int>> vector) {

	sort(V.begin(), V.end());

	int n = 0;
	int a, b;
	for (int i = 0; i < V.size() - 1; i++) {

		if (V[i][0] < V[i + 1][0] && V[i][1] < V[i + 1][1]
			&& V[i][1] - V[i][0] <= V.size() / 2) {

			a = V[i][0];
			b = V[i][1];

			for (int j = 0; j < 2; j++) cout << V[i][j] << ",";
			cout << endl;
			n++;
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