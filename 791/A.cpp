#include<bits/stdc++.h>

using namespace std;

int main() {
    double a, b;
    cin>>a>>b;
    double n = log(b/a)/log(1.5);
    int ans = ceil(n);
    if(ans==n) ans++;
    cout<<ans<<endl;
    return 0;
}

