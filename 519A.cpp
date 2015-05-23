#include <bits/stdc++.h>

using namespace std;

char plot[8][8];

map <char, int> mi;

int main() {
	mi['Q'] = 9;
	mi['R'] = 5;
	mi['B'] = 3;
	mi['K'] = 3;
	mi['P'] = 1;
	mi['q'] = 9;
	mi['r'] = 5;
	mi['b'] = 3;
	mi['k'] = 3;
	mi['p'] = 1;

	int counb = 0;
	int counw = 0;

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			cin >> plot[i][j];
			if (plot[i][j] >= 'A' && plot[i][j] <= 'Z') {
				counw += mi[plot[i][j]];	
			}
			else
				counb += mi[plot[i][j]];
		}
	}

	if (counw == counb) {
		cout <<"Draw\n";
	}
	else if (counw > counb) {
		cout <<"White\n";
	}
	else cout <<"Black\n";
	
	return 0;
}