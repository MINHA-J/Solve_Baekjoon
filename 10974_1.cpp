// ���� ���� ���� (���Ʈ������)
// ��� ����

#include <iostream>
#include <vector>
using namespace std;

#define MAX 8
bool visited[MAX + 1];
vector<int> elements;
int n;
void permutaiotn() {
    if (elements.size() == n) {
        for (auto e : elements) {
            cout << e << " ";
        }
        cout << "\n";
    }
    else {
        for (int i = 1; i <= n; i++) 
        {
            //cout << "���� Ž�� ���� i�� : " << i << "\n";
            if (visited[i])
            {
                //cout << i << " �̹� true�̴�" << "\n";
                continue;
            }
            visited[i] = true;
            elements.push_back(i);
            //cout << "���� �� i�� : " << i << "\n";
            permutaiotn();
            visited[i] = false;
            elements.pop_back();
            //cout << "���� ���� i�� : " << i << "\n";
        }
    }

}

int main(void) {
    cin >> n;
    permutaiotn();
    return 0;
}

/* 
visit�� Ȯ���ϸ鼭 �湮 �� �� ���ڸ� ������ ��͸� ����
depth�� ���鼭 visit�� üũ���ְ�,
������ �� ���� ���� �߰��� ���ڸ� �־��ش�.
�����ϸ鼭 visit üũ�� �������ְ�
������ �� �� ���ڸ� ���ش�
*/