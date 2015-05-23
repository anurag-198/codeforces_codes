#include <bits/stdc++.h>

using namespace std;

int getkey(char a) {
	return a - 48;
}

int main() {
	int tc,i,j,k,k1,k2,k3,t1,t2;
	cin >> tc;
	int ans;
	string a;
	while (tc--) {
		ans = 0;
		cin >> a;
		int flag = 1;
		int l = a.size();
		if (l == 1 && (a == "8") || (a == "0")) {
			cout << "YES\n";
			ans = 1;
		}
		
		if (l == 2) {
			t1 = getkey(a[l - 1]);
			t2 = getkey(a[l - 2]);
			if ((t1 * 10 + t2) % 8 == 0) {
					cout <<"YES\n";
					ans = 1;
			}
			if ((t2 * 10 + t1) % 8 == 0) {
					cout <<"YES\n";
					ans = 1;
			}
		}

		else {
			for (i = 0; i < l; i++) {
				if (flag)
				for (j = 0; j < l; j++) {
					if (flag)
					for (k = 0; k < l; k++) {
						if(flag) {
						if ((i != j) && (j != k) && (i != k)) {
							k1 = getkey(a[i]);
							k2 = getkey(a[j]);
							k3 = getkey(a[k]);

							if (((k1 * 100 + k2 * 10 + k3) % 8) == 0) {
								flag = 0;
								ans = 1;
								cout << "YES\n";
							}
						}
					}
					}
				}
			}
		}
		if (ans == 0) {
			cout <<"NO\n";
		}
		

	}
	return 0;
}