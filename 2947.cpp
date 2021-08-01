// 실전 압축 성장 (구현편)
// 나무 조각

// OK!!

#include <iostream>
using namespace std;

int number[5];

void change(int &a, int &b) 
{
	int temp = a;
	a = b;
	b = temp;
}

int main() 
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int N;

	for (int i = 0; i < 5; i++) 
	{
		cin >> N;
		number[i] = N;
	}

	for (int j = 0; true;)
	{
		if (number[j] > number[j + 1])
		{
			change(number[j], number[j + 1]);

			for (int elem : number)
			{
				cout << elem << " ";
			}
			cout << "\n";
		}

		if (number[0] == 1 && number[1] == 2 && number[2] == 3
			&& number[3] == 4 && number[4] == 5)
		{
			break;
		}

		j++;

		if (j == 4)
		{
			j = 0;
		}
	}

	return 0;
}