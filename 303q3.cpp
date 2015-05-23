#include <bits/stdc++.h>

using namespace std;

int main() {
	std::ios::sync_with_stdio(false);
	int i,j,n,k;
	cin >> n;
	int cn = 0;
	int smc = 0;
	int sol[n];
	int flag = 0;
	int a[n][n];

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			cin >> a[i][j];
			
		}
	}

	
	k = 0;
	for (i = 0; i < n; i++) {
		flag = 0;
		smc = 0;
		for (j = 0; j < n; j++) {
			if ((a[i][j] == 0) || (a[i][j] == 2) || (a[i][j] == -1)) {
				smc++;
			
			}
		}
		
		if (smc == n) {

			sol[k++] = i;
			cn++;
		}
	}

	cout << cn << endl;
	if (cn > 0) {
	for (i = 0;i < k; i++) {
		cout << sol[i] + 1 << " ";
	}

	cout << endl;
	}

	return 0;
}