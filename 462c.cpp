#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

bool compare( long long a, long long b) {return a < b;}

long long array[300005];

int main() {
	long long n, i;
	cin >> n;
	for (i = 1; i <= n; i++) {
		cin >> array[i];
	} 

	long long sum = 0;
	sort (array + 1,array + n + 1,compare);
	for (i = 1; i <= n; i++) {
		if (i != n)
			sum = sum + (i + 1)*array[i];
		else
			sum = sum + i * array[i];
	}
	
	cout << sum << endl;
	
	return 0;
}
