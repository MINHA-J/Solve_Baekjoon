// µ¿Àü 0

#include <iostream>
#include <vector>
using namespace std;

int N, minCoin = 0;
int long long K;
vector<int long long> Coins;

int main()
{
	cin >> N >> K;
	for (int i = 0; i < N; i++)
	{
		int coin;	cin >> coin;
		if (coin < K)
		{
			Coins.push_back(coin);
		}
	}

	for (int k = Coins.size() - 1; k >= 0 && K >= 0; k--)
	{
		int curCoin = Coins[k];

		minCoin += K / curCoin;
		K %= curCoin;
	}
	cout << minCoin;
}