#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll dp[500005];

ll cal(ll n, ll m, int i) {
	dp[1] = 1;
	for (int i = 2; i < n; i++) {
		for(int j = 1; j < m; j++) {
			dp[i] = 1 + max(dp[i - 1], dp[i - 2])
	
		}
	}

int main() {
	ll n,m;
	cin >> n >> m;
	memset (dp,0,sizeof(dp));
	ll ans = cal(n,m,0) - 1;
	cout << ans << endl;
	return 0;
}