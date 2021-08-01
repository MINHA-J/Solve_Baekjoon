// 나이순정렬

// right, BUT time out

#include <iostream>
#include <vector>
using namespace std;

vector<int> Age;
vector<string> Name;

void swap(int& a, int& b) 
{
	int temp = a;
	a = b;
	b = temp;
}

int main() {

	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int N;	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int age;
		string name;
		cin >> age >> name;
		Age.push_back(age);
		Name.push_back(name);
	}

	for (int i = 0; i < N - 1; i++)
	{
		for (int j = 0; j < N - 1 - i; j++)
		{
			if (Age[j] > Age[j + 1])
			{
				swap(Age[j], Age[j + 1]);
				swap(Name[j], Name[j + 1]);
			}
		}
	}

	for (int k = 0; k < N; k++)
	{
		cout << Age[k] << ' ' << Name[k] << "\n";
	}
}