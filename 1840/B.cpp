#include<bits/stdc++.h>

typedef long long ll;
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t>0) {
        ll n,k;
        cin>>n>>k;
        ll val2 = (ll)1<<(ll)33;
        if(k<33) val2 = (ll)1<<(ll)k;
        ll val1 = n+1;
        cout<<min(val1,val2)<<endl;

        t--;
    }
    return 0;
}

