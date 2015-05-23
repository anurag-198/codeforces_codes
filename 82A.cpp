#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main() {
	std::ios::sync_with_stdio(false);
	ll n, k;
	string st[5] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
	cin >> n;
	if (n <= 5) {
		cout << st[n-1] << endl;
		return 0;
	}
	if (n == 6 || n == 7) {
		cout << st[0] << endl;
		return 0;
	}
	if (n == 8 || n == 9) {
		cout << st[1] << endl;
		return 0;
	}

	k = 0;
	while ((5 * pow(2,k)) <= n)
		k++;
	k = k - 1;
	ll diff;
//	cout << k << endl;
	 diff = n - ((5 * pow(2,k)) - 5);
//	cout << diff << endl;
	ll div = ceil(diff / (pow(2, k)));
//	cout << div << endl;
	cout << st[div - 1] << endl;
	return 0;
}
