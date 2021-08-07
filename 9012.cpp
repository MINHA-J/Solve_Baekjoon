// °ýÈ£

#include<iostream>
#include<vector>
#include<string>
using namespace std;

vector<int> Open;

int main()
{
	int T;	cin >> T;

	for (int i = 0; i < T; i++)
	{
		string str; cin >> str;

		for (int i = 0; i < str.size(); i++)
		{
			if (str[i] == '(')
			{
				Open.push_back(1);
			}
			else if (str[i] == ')')
			{
				if (Open.size() == 0) {
					Open.push_back(1);
					break;
				}
				else 
				{
					Open.pop_back();
				}
			}
		}
		if (Open.size() == 0)
			cout << "YES" << "\n";
		else
			cout << "NO" << "\n";

		Open.clear();
	}
	return 0;
}