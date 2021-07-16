// 실전 압축 성장 (자료구조편)
// 큐

#include <iostream>
#include <vector>
using namespace std;

vector<int> V;

int main() {

	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {

		string command;
		cin >> command;

		if (command == "push") {

			int X;
			cin >> X;

			V.push_back(X);
		}

		else if (command == "pop") {

			if (V.size() == 0) cout << -1 << "\n";
			else {
				cout << *V.begin() << "\n";
				V.erase(V.begin());
			}
		}

		else if (command == "size") {

			cout << V.size() << "\n";

		}

		else if (command == "empty") {

			if (V.size() > 0) cout << 0 << "\n";
			else cout << 1 << "\n";
		}

		else if (command == "front") {

			if (V.size() == 0) cout << -1 << "\n";
			else cout << *V.begin() << "\n";
		}

		else if (command == "back") {

			if (V.size() == 0) cout << -1 << "\n";
			else
				cout << *(V.end() - 1) << "\n";
		}
	}

	return 0;
}

// 맞았습니다!!