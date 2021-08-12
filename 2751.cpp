// 수 정렬하기2

// time out!

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

long long int N, num;
vector<long long int> Numbers;


void change(long long int &a, long long int &b)
{
	long long int temp;
	temp = a;
	a = b;
	b = temp;
}

int main()
{
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> num;
		Numbers.push_back(num);
	}

	sort(Numbers.begin(), Numbers.end());

	//for (int k = 0; k < N - 1; k++)
	//{
	//	for (int j = 0; j < N - 1; j++)
	//	{
	//		if (Numbers[j] > Numbers[j + 1])
	//			change(Numbers[j], Numbers[j + 1]);
	//	}
	//}

	for (long long int elem : Numbers)
		cout << elem << "\n";
}