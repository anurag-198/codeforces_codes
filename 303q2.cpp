#include <bits/stdc++.h>

using namespace std;

int main() {
	std::ios::sync_with_stdio(false);
	char a[100005];
	char b[100005];
	char sol[100005];
	char a1[100005];
	char b1[100005];

	int i,cn = 0;
	cin >> a; 
	cin >> b;

	int len = strlen(a);	
	for (i = 0; i < len; i++) {
		a1[i] = '0';
		b1[i] = '1';
	}

	int k = 1;
	for (i = 0; i < len; i++) {
		if (a[i] == b[i]) {
			sol[i] = a[i];
		}
		else {
			cn++;
			//cout << cn <<" " << i<<"" << endl;
			k = k ^ 1;
			sol[i] = k + 48;
		} 
	}
	sol[len] = '\n';
	
	
	if (cn % 2 != 0) {
		cout << "impossible\n";
		return 0;
	}
	cout << sol << endl;

		
	
	return 0;
}