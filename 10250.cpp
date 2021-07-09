// 8. 기본 수학1 - 5단계
// ACM 호텔

#include <iostream>

int main() {
	int T, H, W, N;

	std::cin >> T;

	for (T; T > 0; T--) {

		std::cin >> H >> W >> N;
		int H1, W1;
		H1 = N % H;
		W1 = N / H;

		if (H1 > 0)
			W1++;
		else H1 = H;

		std::cout << H1 *100 + W1<< '\n'; // 라인 띄어쓰기 안해서 틀림

	}

}

// 맨 꼭대기 층이 될 경우를 생각하지 않아서 틀린 듯