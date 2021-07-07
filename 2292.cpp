// 8. 기본 수학1 - 2단계
// 벌집

#include <iostream>

int main() {
	
	long long int N;
	
	std::cin >> N;

	if (N <= 7)
		std::cout << 1;

	else {
		for (long long int i = 1; true; i++) {

			if (N <= (18 * i + 1) && N > (18 * (i - 1) + 1)) {
				std::cout << i+1;
				false;
			}
		}
	}

	return 0;

}
