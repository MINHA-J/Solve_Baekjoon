// 실전 압축 성장(자료구조편)
// 덱

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

		if (command == "push_front") {

			int X;
			cin >> X;

			V.insert(V.begin(), X);
		}

		if (command == "push_back") {

			int X;
			cin >> X;

			V.insert(V.end(), X);
		}

		if (command == "pop_front") {

			if (V.size() == 0) cout << -1 << "\n";
			else {
				cout << *V.begin() << "\n";
				V.erase(V.begin());
			}
		}

		if (command == "pop_back") {

			if (V.size() == 0) cout << -1 << "\n";
			else {
				cout << *(V.end()-1) << "\n";
				V.erase(V.end() - 1);
			}
		}

		if (command == "size") {

			cout << V.size() << "\n";
		}

		if (command == "empty") {

			if (V.size() > 0) cout << 0 << "\n";
			else cout << 1 << "\n";
		}

		if (command == "front") {

			if (V.size() == 0) cout << -1 << "\n";
			else {
				cout << *V.begin() << "\n";
			}
		}

		if (command == "back") {

			if (V.size() == 0) cout << -1 << "\n";
			else {
				cout << *(V.end() - 1) << "\n";
			}
		}
	}

	return 0;
}
