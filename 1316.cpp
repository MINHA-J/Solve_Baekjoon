// ���� ���� ���� (������)
// �׷� �ܾ� üĿ

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

vector<char> alphabet;

int main() {

	int N;
	cin >> N;
	int groupWord = N;

	for (int i = 0; i < N; i++) {

		string word;
		cin >> word;

		for (int j = 0; j < word.size(); j++) {

			auto it = find(alphabet.begin(), alphabet.end(), word[j]);

			if (it == alphabet.end()) { // ó�� �Էµ� ���ĺ�

				alphabet.push_back(word[j]);
			}

			else { // �߰ߵǾ��� ���ĺ�

				if (word[j - 1] != word[j]) { 
					groupWord--; 
					break;
				}
			}
		}

		alphabet.clear();
	}

	cout << groupWord;
	return 0;
}

// �¾ҽ��ϴ�!!
