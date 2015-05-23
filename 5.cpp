#include <bits/stdc++.h>

using namespace std;

typedef struct ht {
	int c;
	int h;
} ht;

int comparec(const void* a, const void* b)
{
    ht *p1 = (ht *)a,   *p2 = (ht *)b;
    return (p1->c - p2->c);
}
 	
int main() {
	int tc,i, n;
	ht hgt[3502];
	cin >> tc;
	while (tc--) {
		cin >> n;
		int last;
		for (i = 0; i < n; i++) {
			cin >> hgt[i].h >> hgt[i].c;
		}

		qsort(hgt, n,sizeof(ht), comparec);
		
		if (n == 1) {
			cout << hgt[0].h << endl;
		}

		if (n == 2) {
			if (hgt[0].h < hgt[1].h) {
					cout << hgt[0].h <<" "<<hgt[1].h;
				}
			else {
				cout << hgt[1].h << " " << hgt[0].h;
			}
		}
			
			if (n > 2) {
				//cout << "0hi";
				if (hgt[0].h < hgt[1].h) {
					cout << hgt[0].h;
					last = hgt[1].h;
				}
				else {
				cout << hgt[1].h;
				last = hgt[0].h;
				}
				//cout <<" go"<< hgt[2].h;
				for (i = 2; i <= n - 1; i++) {
					cout <<" "<< hgt[i].h;
					//cout <<"hi";
				}
				/*for (i = 0; i < n; i++) {
					cout << hgt[i].h << endl;
				}*/
				cout  <<" "<< last << endl;
			}
			if (n == 2){
				cout << endl;
			}
		}
		
	

	return 0;
}