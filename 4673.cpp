// 실전 압축 성장 (구현편)
// 셀프 넘버

// OK!!

#include <iostream>
using namespace std;

bool number[10001];

int MakeNextNum(int N)
{
	int nextNum = N, answer = 0;
	while (N != 0)
	{
		answer = answer + N % 10;
		N = N / 10;
	}
	nextNum += answer;
	return nextNum;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	for (int i = 0; i < 10001; i++) 
	{
		number[i] = true;
	}

	for (int i = 1; i < 10001; i++)
	{
		for (int k = i; k < 10001;)
		{
			k = MakeNextNum(k);
			if (k < 10001 && number[k])
			{
				number[k] = false;
			}
		}
	}

	for (int j = 1; j < 10001; j++)
	{
		if (number[j])
			cout << j << "\n";
	}
	return 0;
}