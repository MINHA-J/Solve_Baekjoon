// 실전 압축 성장 (브루트포스편)
// 모든 순열

// 다른 사람 코드

#include <stdio.h>
#include <vector>
using namespace std;

int isVisited[9];
int N;
vector <int> v;

void dfs() {

	if (v.size() == N) {

		for (int i = 0; i < v.size(); i++)
			printf("%d ", v[i]);
		printf("\n");
	}

	for (int i = 1; i <= N; ++i) {

		if (!isVisited[i]) {

			isVisited[i] = 1;
			v.push_back(i);
			dfs();
			isVisited[i] = 0;
			v.pop_back();
		}
	}
}

int main() {

	scanf("%d", &N);
	dfs();
}

/* 
visit를 확인하면서 방문 안 한 숫자를 넣으며 재귀를 돈다
depth를 들어가면서 visit를 체크해주고,
벡터의 맨 끝에 새로 추가될 숫자를 넣어준다.
복귀하면서 visit 체크를 해제해주고
벡터의 맨 끝 숫자를 빼준다
*/