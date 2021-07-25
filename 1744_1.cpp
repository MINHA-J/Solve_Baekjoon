// 실전압축성장 (그리디 알고리즘 편)
// 수 묶기

#include <iostream>
#include<algorithm>
#include <vector>
using namespace std;

int main() {

	int N;
	cin >> N;

	vector<long long int> Plus;
	vector<long long int> Minus;
	bool zero = false;

	for (int i = 0; i < N; i++) {

		long long int x;
		cin >> x;

		if (x > 0) Plus.push_back(x);
		else if (x < 0) Minus.push_back(x);
		else if (x == 0) zero = true;
	}

	sort(Plus.begin(), Plus.end());
	sort(Minus.begin(), Minus.end());
	int plus_size = Plus.size();
	int minus_size = Minus.size();

	long long int result = 0;

	if (Plus.size() > 0) {

		if (Plus.size() % 2 == 0) {

			for (int i = 0; i < plus_size - 1; i += 2) {
				
				if (Plus[i] == 1 || Plus[i + 1] == 1) {
					result += Plus[i] + Plus[i + 1];
				}

				else 
					result += Plus[i] * Plus[i + 1];
			}
		}

		else {

			if (Plus.size() > 1) {

				for (int i = 1; i < plus_size - 1; i += 2) {

					if (Plus[i] == 1 || Plus[i + 1] == 1) {
						result += Plus[i] + Plus[i + 1];
					}

					else 
						result += Plus[i] * Plus[i + 1];
				}
			}

			result += Plus[0];
		}
	}

	if (Minus.size() > 0) {

		if (Minus.size() % 2 == 0) {

			for (int i = 0; i < minus_size - 1; i += 2) {

				result += Minus[i] * Minus[i + 1];
			}
		}

		else {

			if (Minus.size() > 1) {

				for (int i = 0; i < minus_size - 1; i += 2) {

					result += Minus[i] * Minus[i + 1];
				}
			}

			if (zero) {
				result += 0;
			}

			else if (!zero) {
				result += Minus.back();
			}
		}
	}
	cout << result;
}

// 헐 되따