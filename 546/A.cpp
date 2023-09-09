#include<bits/stdc++.h>

using namespace std;

int main() {
    int k,n,w;
    cin>>k>>n>>w;
    int totcost = ((w*(w+1))/2) * k;
    totcost = max(0, totcost -n);
    cout<<totcost<<endl;
    return 0;
}

