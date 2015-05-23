#include <iostream>

using namespace std;

int main() {
	int tc, n;
	cin >> tc;
	while (tc--) {
		cin >> n;
		if (n % 2 != 0) {
			cout << "Bamboozled!\n";
		}
		else 
			cout << "How you doin?\n";
	}

	return 0;
}