#include <bits/stdc++.h>

using namespace std;

int main() {
	std::ios::sync_with_stdio(false);
	int n ,i, m, k1, k2, n1, n2, pos;
	cin >> n >> m;
	int gir[101];
	int boy[101];

//	vis[101][101];
//	memset(vis,0,sizeof(vis));

	memset(gir,0,sizeof(gir));
	memset(boy,0,sizeof(boy));

	int gc = n * m;

	cin >> n1;
	for (i = 0; i < n1; i++) {
		cin >> pos;
		boy[pos] = 1;
	}

	cin >> n2;
	for (i = 0; i < n2; i++) {
		cin >> pos;
		boy[pos] = 1;
	}

	for (i = 0; i < 10; i++) {
		k1 = i % n;
		k2 = i % m;
		
		if ((boy[k1] == 1) && (gir[k2] == 0)) {
			gir[k2] = 1;
		}

		if ((gir[k1] == 1) && (boy[k2] == 0)) {
			boy[k2] = 1;
		}
	cout << i << " " << k1 << " " << k2 << endl;	
	}
	
	for (i = 0; i < n; i++) {
		if (boy[i] == 0) {
			cout << "No\n";
			return 0;
		}
	}

	for (i = 0; i < m; i++) {
		if (gir[i] == 0) {
			cout << "No\n";
			return 0;
		}
	}

	cout << "Yes\n";
	return 0;
}
