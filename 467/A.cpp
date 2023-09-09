#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    int p,q;
    int res=0;
    cin>>n;
    for(int i=0;i<n;i++) {
        cin>>p>>q;
        if(q-p>=2) res++;
    }
    cout<<res<<endl;
    return 0;
}

