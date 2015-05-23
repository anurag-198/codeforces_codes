#include<bits/stdc++.h>
using namespace std;
int main(){
    string a1;
    string b1;
    cin>>a1;
    cin>>b1;
    int no = a1.length();
    int i;
    i = 0;
    int coun = 0;
    int c2 = 0;
    int c3 = 0;

    char answer[no];
    int temp = 0;
    if (a1 == b1) {
  	cout <<"No such string\n";
	return 0;
	  }
    for(i = 0; i < no; i++){
        
            answer[i] = (a1[i] + b1[i])/2;
	    if (a1[i] == b1[i]) {
		if (!c2)
			coun++;
	    }
	    if (a1[i] == b1[i] - 1) {
		if (a1[i] == b1[i] - 1) {
			if (coun)
				c2++;
		}
	   }
        }
     
 
	if ((c2 + coun) == no) {
		cout <<"No such string\n";
		return 0;
	}
	for (i = 0; i < no; i++) {
		if (a1[i] == b1[i] - 1)
			c3++;
	} 

    	if (c3 == no) {
		cout <<"No such string\n";
		return 0;
	}

        for(i = 0; i < no; i++){
            cout<<answer[i];
        }
	cout << endl;
    
  
    return 0;
}
