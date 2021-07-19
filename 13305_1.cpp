// 실전압축성장 (그리디알고리즘편)
// 주유소

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {

	int N;
	while (true) {

		cin >> N;
		if (N >= 2 && N <= 1000)
			break;
	}
	
	int i = 0, d;
	long int total_distance = 0;
	vector<int> distance;
	while (i < N - 1 && total_distance <= 10000) {

		cin >> d;
		distance.push_back(d);
		total_distance += d;
		i++;
	}

	int c;
	vector<int> cost;
	for (int j = 0; j < N;) {

		cin >> c;
		if (c <= 10000) {
			cost.push_back(c);
			j++;
		}
	}

	long int total_cost = 0;
	long int min_cost = *min_element(cost.begin(), cost.end() - 1);

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