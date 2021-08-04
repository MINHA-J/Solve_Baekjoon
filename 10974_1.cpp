// 실전 압축 성장 (브루트포스편)
// 모든 순열

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
            //cout << "현재 탐색 중인 i는 : " << i << "\n";
            if (visited[i])
            {
                //cout << i << " 이미 true이다" << "\n";
                continue;
            }
            visited[i] = true;
            elements.push_back(i);
            //cout << "현재 들어간 i는 : " << i << "\n";
            permutaiotn();
            visited[i] = false;
            elements.pop_back();
            //cout << "현재 빠진 i는 : " << i << "\n";
        }
    }

}

int main(void) {
    cin >> n;
    permutaiotn();
    return 0;
}

/* 
visit를 확인하면서 방문 안 한 숫자를 넣으며 재귀를 돈다
depth를 들어가면서 visit를 체크해주고,
벡터의 맨 끝에 새로 추가될 숫자를 넣어준다.
복귀하면서 visit 체크를 해제해주고
벡터의 맨 끝 숫자를 빼준다
*/