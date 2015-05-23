#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ll tc, n, i;
	cin >> tc;
	while (tc--) {
		cin >> n;
		ll a[n];
		ll ans = 0;
		for (i = 0; i < n; i++) {
			cin >> a[i];
		}

		if (n % 2 == 0) {
			cout << "0\n";
		}

		else {
			for (i = 0; i < n; i=i+2) {
				ans = (ans ^ a[i]);
			}
			cout << ans << endl;
		}
		
	}

	
	return 0;

}
