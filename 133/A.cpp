#include<bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin>>s;
    bool f=false;
    for (char c:s) {
        if(c=='H' || c=='Q' || c=='9') {
            f = true;
            break;
        }
    }
    if(f) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}

