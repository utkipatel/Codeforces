#include<bits/stdc++.h>

using namespace std;

int main() {
    int n,m,d;
    cin>>n>>m>>d;
    int plats[m];
    int ptot=0;
    for(int i=0;i<m;i++) {
        cin>>plats[i];
        ptot+=plats[i];
    }
    if((d-1)*(m+1) + ptot < n) {
        cout<<"NO"<<endl;
        return 0;
    }
    int res[n+1];
    for(int i=1;i<=n;i++) res[i]=0;
    int curr = 1;
    int rem = n;
    for(int pi=0;pi<m;pi++) {
        int skp = min(d-1, rem - ptot);
        int pz = plats[pi];
        curr=curr+skp;
        for(int i=0;i<pz;i++) res[curr+i] = pi+1;
        curr = curr+pz;
        ptot = ptot - pz;
        rem = rem - pz - skp;
    }

    cout<<"YES"<<endl;
    for(int i=1;i<=n;i++) cout<<res[i]<<" ";
    cout<<endl;


    return 0;
}

