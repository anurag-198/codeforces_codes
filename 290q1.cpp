#include <bits/stdc++.h>

using namespace std;

int main() {
	int n,m,i,j;
	scanf ("%d%d", &n, &m);
	
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= m; j++) {
			if (((i % 2) == 0)) { 
				if (((i % 4) == 0)&& (j == 1)) {
					cout << "#";
				}
				else if (((i % 4) != 0) && (j == m)) {
					cout <<"#";
				}
				else
					cout <<".";
			}
			if ((i % 2) != 0) {
				cout << "#";
			} 
		}
		cout << endl;
	} 

	return 0;
}
