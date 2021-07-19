// 실전압축성장 (그리디알고리즘편)
// 주유소

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {

	int N;
	cin >> N;

	long long int d;
	vector<long long int> distance;
	for (int i = 0; i < N - 1; i++) {
		cin >> d;
		distance.push_back(d);
	}

	long long int c;
	vector<long long int> cost;
	for (int j = 0; j < N; j++) {
		cin >> c;
		cost.push_back(c);
	}

	long long int total_cost = 0;
	long long int min_cost = *min_element(cost.begin(), cost.end() - 1);

	for (int k = 0; k < N - 1; k++) {

		if (cost[k] == min_cost) {

			for (int n = k; n < N - 1; n++) {
				total_cost += min_cost * distance[n];
			}

			break;
		}

		else {
			total_cost += cost[k] * distance[k];
		}
	}

	cout << total_cost;

	return 0;
}