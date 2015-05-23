#include<bits/stdc++.h>
using namespace std;
int main(){
    std::ios::sync_with_stdio(false);
    string a,b;
    cin>>a>>b;
    int i;
    int j;
    int n = a.length();
    char c[n];
    int cn = 0;
    for(i = 0; i < n; i++){
        if(a[i] == b[i]){
            c[i] = a[i];
        }
        else{
            if(cn % 2 == 0){
                c[i] = a[i];
            }
            else{
                c[i] = b[i];
            }
            cn++;
        }
    }
    if(cn % 2 != 0){
        cout<<"impossible\n";
    }
    else{
        for(i = 0; i < n; i++){
            cout<<c[i];
        }
        cout<<"\n";
    }
    return 0;
}