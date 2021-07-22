// 실전압축성장 (그리디 알고리즘 편)
// 캠핑

#include <iostream>
#include <vector>
using namespace std;

int main() {

	int L, P, V, Case = 0;

	while (true) {

		cin >> L >> P >> V;
		if (L == 0) break;
		Case++;

		vector<int> arr(V, 1);

		for (int j = 0; j < V;) {

			j += L;

			for (int h = P - L; (h > 0) && j < V; h--) {
				arr[j] = 0;
				j++;
			}
		}

		int result = 0;

		for (int k = 0; k < V; k++) {
			if (arr[k] == 1) result++;
		}

		cout << "Case " << Case << ": " << result << "\n";
		arr.clear();
	}

	return 0;
}

// 메모리초과