#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    ll m,n;
    cin>>n>>m;
    vector<ll> a(n);
    vector<ll> b(m);

    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) cin>>b[i];
    sort(a.begin(), a.end());

    for(int i=1;i<n;i++) a[i]-=a[0];
    ll gcd = 0;
    for(int i=1;i<n;i++) gcd = __gcd(gcd, a[i]);

    for(int i=0;i<m;i++) {
        cout<<__gcd(b[i]+a[0], gcd)<<" ";
    }

    return 0;
}

