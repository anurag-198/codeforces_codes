#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ll n,j,i, ans1 = 0, ans2 = 0;
	int flag = 1;
	
	ll a[300005];
	ll b[300005];
	ll c[300005];

	int flag1 = 1;

	cin >> n;
	map <ll, int >  vi;
	map <ll, int >  vi2;
	map <ll, int >  vi3;

	for (i = 0; i < n; i++) {
		cin >> a[i];
		vi[a[i]]++;
	}

	for (j = 0; j < n - 1; j++) {
		cin >> b[j];
		vi2[b[j]]++;
	}		
	
	for (j = 0; j < n - 2; j++) {
		cin >> c[j]; 
		vi3[c[j]]++;
	}

	for (i = 0; i < n; i++) {
		if (flag) {
			if (vi[a[i]] > vi2[a[i]]) {
	//				cout <<"hi" << i <<endl;
					flag = 0;
					ans1 = a[i];
				}
		}
	}

	for (i = 0; i < n - 1; i++) {
		
		if (flag1) {
			if (vi2[b[i]] > vi3[b[i]]) {
					flag1 = 0;
					//cout << "hi " << i << endl;
					ans2 = b[i];
				}
		}
	}

	cout << ans1 << endl;
	cout << ans2 << endl;
	return 0;
}