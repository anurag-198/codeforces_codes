#include <iostream>
#include <cstdio>

using namespace std;

long long maxim (long long a, long long b) {
	return (a > b ? a : b);
}
long long f[100005];
long long count[100005] = {0};

int main() {
	int n;
	long long max = 0;
	f[0] = 0;
	long long a;
 	scanf ("%d", &n);

	while (n--) {
		cin >> a;
		count[a]++;
		if (max < a) {
			max = a;
		}
	}

	f[1] = count[1];

	for (int i = 2; i <= max; i++) {
		f[i] = maxim(f[i - 1], (f[i - 2] + (i * count[i])));
	}

	cout <<f[max] << endl;
	
return 0;
}
