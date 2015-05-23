#include <iostream>
#include <cstdio>

using namespace std;

char a[100005];
int dp[100005];

int main() {
	int i,m,l,r;
	dp[0] = 0;
	scanf ("%s", a);

	for(i = 0; a[i] != '\0'; i++) {
		 dp[i + 1] =  (a[i] == a[i + 1]) ? dp[i] + 1 : dp[i];
	}	
	
	scanf ("%d", &m);
	for (i = 0; i < m; i++) {
		scanf ("%d%d", &l, &r);
		printf("%d\n", dp[r - 1] - dp[l - 1]);
	}
	return 0;
}
