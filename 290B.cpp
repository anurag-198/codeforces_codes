#include <bits/stdc++.h>

using namespace std;
int n, m;
char a[51][51];
int visit[51][51];

void chckdfs (char col, int i, int j, int pr, int pl,int *flag) {
	if (visit[i][j]) {
			*flag = 1;		
		return;
	}

	visit[i][j] = 1;


	if (((i - 1) >= 0) && (pr != (i - 1)) && (a[i - 1][j] == col)) {
		chckdfs(col, i - 1, j, i, j,flag); 
	}

	if (((i + 1) < n) && (pr != (i + 1)) && (a[i + 1][j] == col)) {
		chckdfs(col, i + 1,j,i,j,flag); 
	}
	if (((j - 1) >= 0) && (pl != (j - 1)) && (a[i][j - 1] == col)) {
		chckdfs(col, i, j - 1, i,j,flag);
	}
	
	if (((j + 1) < m) && (pl != (j + 1)) && (a[i][j + 1] == col)) {
		chckdfs(col, i, j + 1, i, j,flag);
	}
}

int main () {
	int i, j;	
	int flag = 0;

	scanf ("%d%d", &n, &m);
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			scanf (" %c", &a[i][j]);
		}
	}

	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			memset(visit, 0, sizeof(visit));
			chckdfs(a[i][j], i, j, -1, -1, &flag);
		}
	}
	if (flag) 
		cout << "Yes\n";
	else
		cout <<"No\n";

	return 0;
}
