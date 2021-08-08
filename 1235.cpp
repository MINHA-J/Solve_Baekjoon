// 실전압축성장 (구현편)
// 학생 번호

// OK!!
/*
초반에 문제를 제대로 안 읽어서 번호의 길이가 달라질 수 있다는 걸 간과했다
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

		if (it != data.end()) // 동일한 숫자가 존재하는 경우
		{
			return 1;
			break;
		}
	}
	return 0;	// 끝까지 없으면 모두 다른 숫자로 이루어진 것이다
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
