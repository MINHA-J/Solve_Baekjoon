// 실전압축성장 (구현편)
// 욱제는 결정장애야!!

// OK!!

#include <iostream>
#include <vector>
using namespace std;

vector<int> menu;
int cur = 0, Max = 0;

int main() 
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N; cin >> N;
	for (int i = 0; i < N; i++)
	{
		menu.push_back(0);
	}

	for (int i = 0; i < 2 * N; i++)
	{
		int choice;	cin >> choice;
		if (!menu[choice - 1])
		{
			menu[choice - 1] = 1;
			cur++;
		}
		else
			cur--;

		if (cur > Max)
			Max = cur;
	}
	cout << Max;
}
