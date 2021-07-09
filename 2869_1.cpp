// 8. 기본 수학1 - 4단계
// 달팽이는 올라가고 싶다

#include<iostream>

int main() {
	long long int A, B, V, N;
	std::cin >> A >> B >> V;

	V -= A;

	N = V / (A - B);

	if (V % (A - B) != 0)
		std::cout << N + 2;

	else std::cout << N + 1;

}

// 근데 정확한 이해를 하진 못했음,,