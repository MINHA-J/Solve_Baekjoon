// ���� ���� ���� (���Ʈ������)
// ��� ����

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

// �� �� ���� �ϳ��� it ��ġ�� �߰�, �μ��ϴ� ������ �ҷ��µ� �� �ȴ�