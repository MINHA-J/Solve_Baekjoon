// 실전 압축 성장 (구현편)
// 그룹 단어 체커

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

			if (it == alphabet.end()) { // 처음 입력된 알파벳

				alphabet.push_back(word[j]);
			}

			else { // 발견되었던 알파벳

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

// 맞았습니다!!
