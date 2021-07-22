// 실전압축성장 (그리디 알고리즘 편)
// 캠핑

#include <iostream>
using namespace std;

int main() {

	int L, P, V;
	bool* arr = NULL;

	while (true) {

		cin >> L >> P >> V;
		if (L == 0) break;

		bool* arr = new bool[V];

		for (int i = 0; i < V; i++) {
			arr[i] = true;
		}

		for (int j = 0; j < V;) {

			j += L;

			for (int h = P - L; (h > 0) && j < V; h--) {
				arr[j] = false;
				j++;
			}
		}

		int result = 0;

		for (int k = 0; k < V ; k++) {
			if (arr[k]) result++;
		}

		cout << result << "\n";
	}

	delete[]arr;
	return 0;
}

// 메모리 초과