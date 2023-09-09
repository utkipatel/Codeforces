#include<bits/stdc++.h>
typedef long long ll;

using namespace std;

int main() {
    ll n,k,s;
    cin>>n>>k>>s;
    if(s<k || s>((n-1)*k)) {
        cout<<"NO";
        return 0;
    }
    cout<<"YES"<<endl;
    ll curr = 1;
    while(k>0) {
        ll jmp = (s+k-1)/k;
        if(curr+jmp>n) {
            curr = curr-jmp;
        } else {
            curr = curr+jmp;
        }
        s-=jmp;
        cout<<curr<<" ";
        k--;
    }

    return 0;
}

