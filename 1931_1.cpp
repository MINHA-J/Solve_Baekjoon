// �������༺��(�׸���˰�����)
// ȸ�ǽ� ����

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

vector<vector<long int>> V;

void Room(long int a, long int b) {

	vector<long int> time = { b, a };

	V.push_back(time);
}


int get_Room(vector<vector<long int>> vector) {

	sort(V.begin(), V.end()); // ������ �ð� �������� ������

	int n = 1; // ù��° �ð� ī����
	int start = V[0][1], finish = V[0][0];

	for (int i = 1; i < V.size(); i++) { // �� �̰� 0 -> 1�� �����ϴϱ� ����

		if (finish <= V[i][1]) {
			n++;
			finish = V[i][0];
			start = V[i][1];
		}
	}
	return n;
}

int main() {

	int T, k, n;
	std::cin >> T;

	for (int i = 0; i < T; i++) {

		std::cin >> k >> n;
		Room(k, n);
	}

	std::cout << get_Room(V);
}

// �¾ҽ��ϴ�!! 4Ʈ����,, *^^