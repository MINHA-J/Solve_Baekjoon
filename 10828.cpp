// 실전 압축 성장 (자료구조편)
// 스택

#include <iostream>
#include <vector>
using namespace std;

vector<int> V;

int main() {

	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {

		string command; // char로 하니까 당연히 안 되죠..
		cin >> command;

		if (command == "push") {

			int X;
			cin >> X;

			V.push_back(X);
		}

		else if (command == "pop") {

			if (V.size() == 0) cout << -1 << "\n";
			else {
				int n;
				n = V.size();
				cout << V[n - 1] << "\n";
				V.erase(V.end() - 1);
			}
		}

		else if (command == "size") {

			cout << V.size() << "\n";

		}

		else if (command == "empty") {

			if (V.size() > 0) cout << 0 << "\n";
			else cout << 1 << "\n";
		}

		else if (command == "top") {

			if (V.size() == 0) cout << -1 << "\n";
			else {
				int n;
				n = V.size();
				cout << V[n-1] << "\n";
			}
		}
	}
}

