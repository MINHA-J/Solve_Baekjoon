// 9. 기본 수학2 - 9단계
// 직각삼각형

#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int a[3];

int main() {

	while (true) {

		int x, y, z;
		cin >> x >> y >> z;

		if (x == 0 && y == 0 && z == 0) break;

		a[0] = x;	a[1] = y;	a[2] = z;
		sort(a, a + 3);

		if (pow(a[2], 2) == pow(a[0], 2) + pow(a[1], 2)) {

			cout << "right" << endl;
		}

		else cout << "wrong" << endl;
	}
}