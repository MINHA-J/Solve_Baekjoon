// �������༺�� (������)
// �л� ��ȣ

// OK!!
/*
�ʹݿ� ������ ����� �� �о ��ȣ�� ���̰� �޶��� �� �ִٴ� �� �����ߴ�
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> Student;
vector<string> Short;
int K, stringSize;

int Same(vector<string> data)
{
	if (K > stringSize)
		return 0; 

	for (int i = 0; i < data.size() - 1; i++)
	{
		vector<string>::iterator it = find(data.begin() + i + 1, data.end(), data[i]);

		if (it != data.end()) // ������ ���ڰ� �����ϴ� ���
		{
			return 1;
			break;
		}
	}
	return 0;	// ������ ������ ��� �ٸ� ���ڷ� �̷���� ���̴�
}


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N;	cin >> N;
	for (int i = 0; i < N; i++)
	{
		string student;	cin >> student;
		stringSize = student.size();
		Student.push_back(student);
	}

	K = 1;

	while (true)
	{
		int i = 0;

		for (K; i < N;)
		{
			char ch1[1005] = { Student[i][stringSize - K] };
			string totalNum(ch1);

			for (int k = stringSize + 1 - K; k < stringSize; k++)
			{
				char ch2[1005] = { Student[i][k] };
				string num(ch2);
				totalNum += num;

			}
			Short.push_back(totalNum);
			i++;
		}

		if (Same(Short))
		{
			Short.clear();
			K++;
		}
		else
		{
			cout << K << "\n";
			break;
		}
	}
	return 0;
}
