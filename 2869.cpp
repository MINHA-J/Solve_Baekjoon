// 8. 기본 수학1 - 4단계
// 달팽이는 올라가고 싶다

#include<iostream>

int main() {

	long long int A, B, V, n = 0, N = 0;
	std::cin >> A >> B >> V;

	for (n = 1; true; n++) {

		V -= A;

		if (V <= 0) {
			std::cout << n;
			break;
		}
		
		V += B;
		
	}
}

// 시간 초과
