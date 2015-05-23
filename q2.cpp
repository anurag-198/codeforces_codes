#include <bits/stdc++.h>

using namespace std;

int main() {
	int i, len, flag = 0;
	char temp;
	char num[10];
	scanf ("%s", num);
	int pos2 = 0;
	int pos1 = 0;
	len = strlen(num);
	int maxi = 0;
	for (i = 0; num[i] != '\0'; i++) {
		if (flag == 1) {
			if ((num[i] - 48) % 2 == 0) {
				pos2 = i;
	//			break;
			}
		}

		if ((num[i] - 48) % 2 == 0) {
			pos1 = i;
			flag = 1;			
		}
	
	}

	if (pos2) {
		if (num[pos1] < num[len - 1]) {
			temp = num[pos1];
			num[pos1] = num[len - 1];
			num[len - 1] = temp;	
		}

		else {
			temp = num[pos2];
			num[pos2] = num[len - 1];
			num[len - 1] = temp;	
		}
		cout << num << endl;	
		return 0;
	}

	if (flag) {
			temp = num[pos1];
			num[pos1] = num[len - 1];
			num[len - 1] = temp;	
			cout << num << endl;
			return 0;
	}
	
	cout << "-1\n";
	return 0;

}
