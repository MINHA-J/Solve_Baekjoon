// �������༺�� (�׸��� �˰��� ��)
// A -> B

#include <iostream>
#include <vector>
using namespace std;

int main() {

	int A, B, cnt = NULL;
	cin >> A >> B;

	while(true) {

		if (A > B) {
			cout << -1;
			break;
		}
		
		if (A == B) {
			cnt++;
			cout << cnt;
			break;
		}

		if (B % 10 == 1) {
			B--;
			B /= 10;
		}

		else if (B % 2 == 0) {
			B /= 2;
		}

		else {
			cout << -1;
			break;
		}

		cnt++;
	}

	return 0;
}

// �ٸ� ��� �ڵ� ����