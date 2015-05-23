#include <bits/stdc++.h>

using namespace std;

int main() {
	int flag, flag2,i,j,n,m,k,a,b;
	int count = 1;

	scanf ("%d%d%d", &n, &m, &k);
	
	int mat[n+1][m+1];

	for (i = 1; i <= n; i++) {
		for (j = 1; j <= m; j++) {
			mat[i][j] = 0;
		}
	}

	int ans1, ans2;

	map<pair<int,int> , int> ma;
	flag = 0;

	while(k--) {
		scanf ("%d%d", &a, &b);
		mat[a][b] = 1;	
		ma[make_pair(a,b)] = count;
		count++;
			
			if (flag == 0) {
			if (mat[a][b] == 1) {
				if (((b + 1) <= m) && ((a + 1) <= n)) {
					if ((mat[a][b+1] == 1) && (mat[a+1][b] == 1) && (mat[a+1][b+1] == 1)) {
						
						ans1 = ma[make_pair(a,b)];
					//	cout << ans1 << "hello";
						flag = 1;
						flag2 = 1;
					}				
				}
				if (((b + 1) <= m) && ((a - 1) >= 1)) {
					if ((mat[a][b+1] == 1) && (mat[a-1][b] == 1) && (mat[a-1][b+1] == 1)) {
						ans1 = ma[make_pair(a,b)];
				//		cout << ans1;
						flag = 1;
						flag2 = 1;
					}				
				}
				if (((b - 1) >= 1) && ((a - 1) >= 1)) {
					if ((mat[a][b-1] == 1) && (mat[a-1][b] == 1) && (mat[a-1][b-1] == 1)) {
						ans1 = ma[make_pair(a,b)];
				//		cout << ans1;
						flag = 1;
						flag2 = 1;
					}				
				}
				if (((b - 1) >= 1) && ((a + 1) <= n)) {
					if ((mat[a][b-1] == 1) && (mat[a+1][b] == 1) && (mat[a+1][b-1] == 1)) {
						ans1 = ma[make_pair(a,b)];
				//		cout << ans1;
						flag = 1;
						flag2 = 1;
					}				
				}
				
			}
		}
	}
	if (flag == 1) {
		cout << ans1 << endl;
	}
	if (flag == 0) 
		printf ("0\n");
	return 0;
}
