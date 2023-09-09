#include<bits/stdc++.h>

using namespace std;

int main() {
    int n,t;
    cin>>n>>t;
    string s;
    cin>>s;
    for(int ti=0;ti<t;ti++) {
        for(int i=1;i<n;) {
            if(s[i]=='G' && s[i-1]=='B') {
                swap(s[i], s[i-1]);
                i+=2;
            }  else {
                i++;
            }
        }
    }
    cout<<s<<endl;
    return 0;
}

