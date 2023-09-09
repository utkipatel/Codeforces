#include<bits/stdc++.h>

typedef long long ll;
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t>0) {
        ll ans=0;
        ll n,k,q;
        cin>>n>>k>>q;
        vector<ll> arr(n);
        for(ll i=0;i<n;i++) cin>>arr[i];

        for(ll i=0;i<n;) {
            if(arr[i]>q) {
                i++;
                continue;
            }
            ll l = i;
            while(i<n && arr[i]<=q) {
                i++;
            }
            ll r = i;
            if(r-l>=k) {
                ll w = r-l+1-k;
                ans = ans + (w*(w+1))/2;
            }
        }

        cout<<ans<<endl;

        t--;
    }
    return 0;
}

