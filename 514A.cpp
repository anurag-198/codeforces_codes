#include <bits/stdc++.h>

using namespace std;

int main () {
	std::ios::sync_with_stdio(false);

	string a; 
	int i;
	cin >> a;
	
	if ((a[0] > 52) && (a[0] < 57)) {
		a[0] = 9 - (a[0] - 48) + 48;
	}
	for (int i = 1; i < a.size(); i++) {
		if (a[i] - 48 >= 5) {
			a[i] = 9 - (a[i] - 48) + 48;
		}
	} 
	
	cout << a << endl;
}

