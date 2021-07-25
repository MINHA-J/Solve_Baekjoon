// �������༺�� (�׸��� �˰��� ��)
// �� ����
// �ٸ� ��� �ڵ� �����ϱ�

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool visited[10001] = { false };

long long Solution(vector<int>& number) {

	long long answer = 0;

	sort(number.begin(), number.end());

	// ��� �κ� ���ϱ�
	for (int i = number.size() - 1; i > 0; i--) {

		if ((!visited[i] && !visited[i - 1]) && (number[i] > 1 && number[i - 1] > 1)) {

			visited[i] = visited[i - 1] = true;
			answer += number[i] * number[i - 1];
		}
	}

	// ���� �κ� ���ϱ�
	for (int i = 0; i < number.size() - 1; i++) {

		if ((!visited[i] && !visited[i + 1]) && (number[i] <= 0 && number[i + 1] <= 0)) {

			visited[i] = visited[i + 1] = true;
			answer += number[i] * number[i + 1];
		}
	}

	// ������ ���� ���ϱ�
	for (int i = 0; i < number.size(); i++) {

		if (!visited[i]) // visites�� false�� ���(���� ���) ���Ѵ�.
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