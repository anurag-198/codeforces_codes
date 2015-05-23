#include <bits/stdc++.h>

using namespace std;

int main() {
	std::ios::sync_with_stdio(false);

	int x, y;
	int a, b, i, j;
	vector< pair<int, int> > vi;
	int n;
	cin >> n >> x >> y;
	int q[n][2];
	int flag[1001];
	memset (flag, 0, sizeof(flag));

	int ans = n;
	double m, m2;
	for (i = 0; i < n; i++) {
///		cin >> a >> b;
		cin >> q[i][0] >> q[i][1];
//		vi.push_back(make_pair(a,b));
	}
//	cout << ans << endl;
	for (i = 0; i < n; i++) {
		if (x - q[i][0]) 
			m = double(y - q[i][1])/double(x - q[i][0]);
		m2 = double(x - q[i][0]); 
		for (j = 0; j < n && j != i; j++) {
			if ((x - q[j][0]) && (1 )) {
				cout << q[i][0] << q[i][1] << q[j][0]<<q[j][1];
				if ((m == double(y - q[j][1])/double(x - q[j][0])) && (!flag[j])) {
					flag[j] = 1;
					ans--;
					cout << ans << m << " "<< q[j][0] <<" "<< q[j][1]<< endl;
				}
			}
		//	cout << m2 << " "<< x - q[j][0] << endl;
			else if (((m2 == 0) && (x - q[j][0]) == 0) && (!flag[j])) {
				flag[j] = 1;
				ans--;	
				cout << ans << " "<< q[j][0] <<q[j][1]<< endl;
			}		
		}
	}

	cout << ans << endl;
	return 0;
}
