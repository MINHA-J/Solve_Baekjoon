// �������༺�� (�׸��� �˰��� ��)
// ķ��

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

// �޸� �ʰ�