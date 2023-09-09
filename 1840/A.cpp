#include<bits/stdc++.h>

typedef long long ll;
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t>0) {
        int n;
        cin>>n;
        string s;
        cin>>s;
        string res= "";
        for(int i=0;i<n;) {
            char c = s[i];
            res=res+c;
            i++;
            while(i<n && s[i]!=c) i++;
            i++;
        }
        cout<<res<<endl;
        t--;
    }
    return 0;
}

