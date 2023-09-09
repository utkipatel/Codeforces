#include<bits/stdc++.h>

typedef long long ll;
using namespace std;

int main() {
    ll t;
    cin>>t;
    while(t>0) {
        ll a,b,q;
        cin>>a>>b>>q;
        if(a>b) swap(a,b);
        ll lcm = a*b/(__gcd(a,b));
        while(q>0) {
            ll l,r;
            cin>>l>>r;
            ll lcust = (l/lcm)*lcm;
            ll rcust = ((r+lcm-1)/lcm)*lcm -1;
            ll nlcmcyc = (rcust-lcust+1)/lcm;
            ll ans = rcust-lcust + 1 - b*nlcmcyc;

            ans = ans - max((ll)0, l-lcust-b);
            ans = ans - max((ll)0, rcust - max(r, rcust-lcm+b));

            cout<<ans<<" ";
            q--;
        }

        cout<<endl;
        t--;
    }
    return 0;
}

