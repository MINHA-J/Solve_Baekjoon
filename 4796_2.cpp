// 실전압축성장 (그리디 알고리즘 편)
// 캠핑

#include <iostream>
using namespace std;

int main() {

	int L, P, V, Case = 0, result;

	while (true) {

		cin >> L >> P >> V;
		if (L == 0) break;

		Case++;
		result = 0;

		while (V >= 0) {

			if (V < L) {
				result += V;
				break;
			}

			result += L; 
			V -= L;

			V -= P - L;
		}

		cout << "Case " << Case << ": " << result << "\n";
	}

	return 0;
}

// 메모리 초과