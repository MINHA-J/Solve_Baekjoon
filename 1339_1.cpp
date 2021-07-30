// 실전압축성장 (그리디 알고리즘 편)
// 단어 수학

// I don't know

#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

int N, total;
char alphabet[10];
vector<string> words;
vector<int> wordSize;
vector<int> result;

// 제일 긴 글부터 숫자를 배당해야하므로
int MaxSize(vector<int> Size) {

	int maxSize = 0, maxIndex = 0;

	for (int i = 0; i < Size.size(); i++) {

		if (maxSize <= Size[i]) {
			maxSize = Size[i];
			maxIndex = i;
		}
	}

	Size.erase(Size.begin() + maxIndex);
	cout << maxIndex << "\n";
	return maxIndex;
}


void Result(vector<int> num) {

	int n = num.size();
	for (int i = 0; i < num.size(); i++) {

		total += num[i] * pow(10, n - 1);
		n--;
	}
	cout << total;
	num.clear();
}


int WordMath(vector<string> data) {

	int num = 9;
	int cur = MaxSize(wordSize);

	while (wordSize.size() > -1) {

		for (int i = 0; i < data[cur].size(); i++) {

			for (int j = 0; j < 10; j++) {

				if (alphabet[j] == data[cur][i]) {
					result.push_back(j);
				}

				else if (j == 9) {
					alphabet[num] = data[cur][i];
					result.push_back(num);
					num--;
				}
			}
		}

		Result(result);
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