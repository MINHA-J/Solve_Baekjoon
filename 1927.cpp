// 실전 압축 성장(자료구조편)
// 최소 힙

#include <iostream>
#include <vector>
using namespace std;

vector<int> V;

void push(int x) {

	V.push_back(x);
}

void min_value() {

	if (V.size() == 0) cout << 0;
	else {

		for (int i)
	}
	
}


int main() {

	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {

		int x;
		cin >> x;

		if (x == 0) min_value();
		else push(x);
	}

	return 0;
}