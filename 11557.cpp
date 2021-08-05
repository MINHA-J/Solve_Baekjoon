// OK!!

#include<iostream>
#include <vector>
using namespace std; 

vector<string> school;

int main() 
{
	int T;	cin >> T;
	for (int i = 0; i < T; i++)
	{
		int N;	cin >> N;
		int max = 0, maxIndex = 0;
		for (int i = 0; i < N; i++)
		{
			int amount;	string schoolName;
			cin >> schoolName >> amount;
			school.push_back(schoolName);
			if (max < amount)
			{
				maxIndex = i;
				max = amount;
			}
			
		}
		cout << school[maxIndex] << '\n';
		school.clear();
	}
}
