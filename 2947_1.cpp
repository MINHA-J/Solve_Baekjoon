// another code

#include <iostream>
using namespace std;

int main(void)
{
	int arr[5];

	for (int i = 0; i < 5; i++)
		cin >> arr[i];

	// 총 비교 단계는 '항목의 개수' - 1 만큼이다.
	for (int i = 0; i < 4; i++)
	{	// 각 단계별로 비교 횟수는 '항목의 개수' - 1에서 시작하여
		// 단계(step)가 증가할 수록 1씩 줄어든다
		for (int j = 0; j < 4 - i; j++)
		{	// 인접한 두 항목을 비교하여 큰 값을 뒤로 옮긴다.
			if (arr[j] > arr[j + 1]) 
			{
				int tmp;
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;

				for (int k = 0; k < 5; k++)
					cout << arr[k] << " ";
				cout << "\n";
			}
		}
	}
}

// TIP : 버블 정렬에서 스왑이 발생할 때 출력을 해준다.