// 10. ��� - 1�ܰ�
// ���丮��

#include <iostream>
using namespace std;

int fac(int N) {

	if (N == 0) 
		return 1;

	return N * fac(N - 1);
}

int main() {

	int N;
	cin >> N;

	cout << fac(N);

	return 0;
}