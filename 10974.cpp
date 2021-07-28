// 실전 압축 성장 (브루트포스편)
// 모든 순열

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	int N;
	cin >> N;

	if (N == 1) {
		cout << 1;
	}

	else {

		vector<int> number;
		for (int i = 1; i <= N; i++) number.push_back(i);

		int j = 0, k = 1;

		while (j < N) {

			int top = number[j];
			int temp;

			for (int elem : number) cout << elem << " ";
			cout << "\n";

			vector<int>::iterator it = number.begin();

			while (k < number.size() - 1) {

				temp = *(it + 1);

				number.erase(number.begin() + k);
				it = number.insert(it + k, temp);

				for (int elem : number) cout << elem << " ";
				cout << "\n";

				k++;
			}

			it = number.begin();
			k = 1;
			sort(it + 2, number.end());

			j++;
		}
	}
}

// 맨 앞 말고 하나씩 it 위치에 추가, 인쇄하는 식으로 할랬는데 안 된다