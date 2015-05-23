#include <bits/stdc++.h>

using namespace std;

int a[3], DP[4005];
int main() {
	DP[0] = 0;
	int i,j,n;
	scanf ("%d%d%d%d", &n, &a[0], &a[1], &a[2]);
	sort(a,a+3);

	for (i = 1; i <= n; i++) {
		DP[i] = INT_MIN;
		for (j = 0; j < 3; j++) {
			if (i - a[j] < 0) continue;
			DP[i] = max(DP[i], 1 + DP[i - a[j]]);
		}
	}
	printf("%d\n",DP[n]);
	return 0;
}
