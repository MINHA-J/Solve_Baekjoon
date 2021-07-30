// 실전압축성장 (그리디 알고리즘 편)
// 단어 수학

// I don't know

#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

int N, total;
vector<char*> alphabet[11];
vector<string> words;
vector<int> wordSize;
vector<int> result;

// 제일 긴 글부터 숫자를 배당해야하므로
int MaxSize() {

	int maxSize = 0, maxIndex = 0;
	
	for (int i = 0; i < wordSize.size(); i++) {

		if (maxSize < wordSize[i]) {
			maxSize = wordSize[i];
			maxIndex = i;
		}
	}

	wordSize.erase(wordSize.begin() + maxIndex); 
	cout << maxIndex << "\n";
	return maxIndex;
}


void Result(vector<int> num) {

	int n = num.size();
	for (int i = 0; i < num.size(); i++) {

		total += num[i] * pow(10, n - 1);
		n--;
	}
	num.clear();
}


int WordMath(vector<string> data) {

	int num = 9;
	auto start = alphabet->begin();

	while (wordSize.size() != 0) {

		int cur = MaxSize();

		for (int i = 0; i < data[cur].size(); i++) {

			auto it = find(alphabet->begin(), alphabet->end(), data[cur][i]);

			if (it == alphabet->end()) {

				alphabet.insert(start + num, data[cur][i]);
				result.push_back(num);
				num--;
			}

			else {
				result.push_back(it - (alphabet->begin()));
			}

			Result(result);
		}
	}

	return total;
}


int main() {

	cin >> N;

	for (int i = 0; i < N; i++) {

		string word;
		cin >> word;
		words.push_back(word);
		wordSize.push_back(word.size());
	}

	cout << WordMath(words);
}