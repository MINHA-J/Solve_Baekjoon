// 실전압축성장 (그리디 알고리즘 편)
// 수 묶기
// 다른 사람 코드 공부하기

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool visited[10001] = { false };

long long Solution(vector<int>& number) {

	long long answer = 0;

	sort(number.begin(), number.end());

	// 양수 부분 구하기
	for (int i = number.size() - 1; i > 0; i--) {

		if ((!visited[i] && !visited[i - 1]) && (number[i] > 1 && number[i - 1] > 1)) {

			visited[i] = visited[i - 1] = true;
			answer += number[i] * number[i - 1];
		}
	}

	// 음수 부분 구하기
	for (int i = 0; i < number.size() - 1; i++) {

		if ((!visited[i] && !visited[i + 1]) && (number[i] <= 0 && number[i + 1] <= 0)) {

			visited[i] = visited[i + 1] = true;
			answer += number[i] * number[i + 1];
		}
	}

	// 남겨진 수들 더하기
	for (int i = 0; i < number.size(); i++) {

		if (!visited[i]) // visites가 false인 경우(남은 경우) 더한다.
			answer += number[i];
	}

	return answer;
}

void Insert(vector<int>& number, int N) {

	for (int i = 0; i < N; i++) {

		int num; cin >> num;
		number.push_back(num);
	}
}

int main() {

	int N; cin >> N;
	vector<int> number;
	Insert(number, N);
	cout << Solution(number);

	return 0;
}