// another code

#include <iostream>
using namespace std;

int main(void)
{
	int arr[5];

	for (int i = 0; i < 5; i++)
		cin >> arr[i];

	// �� �� �ܰ�� '�׸��� ����' - 1 ��ŭ�̴�.
	for (int i = 0; i < 4; i++)
	{	// �� �ܰ躰�� �� Ƚ���� '�׸��� ����' - 1���� �����Ͽ�
		// �ܰ�(step)�� ������ ���� 1�� �پ���
		for (int j = 0; j < 4 - i; j++)
		{	// ������ �� �׸��� ���Ͽ� ū ���� �ڷ� �ű��.
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

// TIP : ���� ���Ŀ��� ������ �߻��� �� ����� ���ش�.