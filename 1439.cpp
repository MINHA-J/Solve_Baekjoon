// �������༺�� (�׸��� �˰��� ��)
// ������

#include <iostream>
#include <string>
using namespace std;


int main() {

	string S;
	cin >> S;

	int zeroCount = 0, oneCount = 0;

	if(S[0] == '0') zeroCount++;
	else oneCount++;

	for (int i = 1; i < S.size(); i++) {

		if (S[i] == '0') {

			zeroCount++;

			if (S[i - 1] == '0') zeroCount--;
		}

		else if (S[i] == '1') {

			oneCount++;

			if (S[i - 1] == '1') oneCount--;
		}
	}

	//cout << "zeroCount :" << zeroCount << "\n";
	//cout << "oneCount :" << oneCount << "\n";

	if (zeroCount > oneCount) 
		cout << oneCount;
	else 
		cout << zeroCount;
}

// �¾ҽ��ϴ�!