// 실전압축성장 (구현편)
// 집합

// OK

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> S;
int index;

bool exist(int n) {

	auto it = find(S.begin(), S.end(), n);

	if (it == S.end()) return false;
	else {
		index = it - S.begin();
		return true;
	}
}

int main() {

	cin.tie(NULL);
	ios::sync_with_stdio(false);
	
	int N, M;	cin >> M;

	for (int i = 0; i < M; i++) {

		string command;	cin >> command;

		if (command == "add") {

			cin >> N;
			if (!exist(N))
				S.push_back(N);
		}

		else if (command == "remove") {

			cin >> N;
			if (exist(N))
				S.erase(S.begin() + index);
		}

		else if (command == "check") {

			cin >> N;
			if (exist(N))
				cout << 1 << "\n";
			else
				cout << 0 << "\n";
		}

		else if (command == "toggle") {

			cin >> N;
			if (exist(N))
				S.erase(S.begin() + index);
			else
				S.push_back(N);
		}

		else if (command == "all") {

			S.clear();
			for (int i = 1; i <= 20; i++)
				S.push_back(i);
		}

		else if (command == "empty") {
			S.clear();
		}

		sort(S.begin(), S.end());
	}

	return 0;
}