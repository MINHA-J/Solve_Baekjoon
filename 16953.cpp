// 실전압축성장 (그리디 알고리즘 편)
// A -> B

#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;
int main() {

	int A, B;
	cin >> A >> B;

	vector<int> vec;

	vec.push_back(B);
	
	for (int i = 0; true;) {

		int num = vec[i], last;

		last = num % 10;
	
		if (last = 0 || last % 2 == 0) {
			vec.push_back(vec[i] / 2);

			if (A == vec[i + 1]) {
				cout << i + 2;
				break;
			}
		}

		
		if (last == 1) {
			vec.push_back((vec[i] - 1) / 10);

			if (A == vec[i + 1]) {
				cout << i + 2;
				break;
			}
		}

		else {
			cout << -1;
			break;
		}
	}

	return 0;
}