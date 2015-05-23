#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
	std::ios::sync_with_stdio(false);

	ll a,dif, b, s , sum;
	cin >> a >> b >> s;
	
	if (a < 0)
		a = -1 * a;
	if (b < 0) 
		b = -1 * b;

	sum = a + b;
	dif = s - sum;

	if (s < sum) {
		cout << "No\n";
		return 0;
	}
	if (dif % 2 == 0) 
		cout << "Yes\n";
	else 
		cout << "No\n";
	
	
	return 0;
}
