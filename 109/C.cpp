#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> ipair;

bool isLucky(int x) {
    while(x>0) {
        if(x%10!=4 && x%10!=7) return false;
        x/=10;
    }
    return true;
}

int dsfind(int v, vector<int> &parents) {
    if(v==parents[v]) return v;
    parents[v] = dsfind(parents[v], parents);
    return parents[v];
}

void dsunion(int u,int v, vector<int> &parents, vector<int> &ranks) {
    int pu = dsfind(u, parents);
    int pv = dsfind(v, parents);
    if(pu==pv) return;
    int ru = ranks[pu];
    int rv = ranks[pv];
    if(rv>ru) {
        parents[pu] = pv;
        parents[u] = pv;
        ranks[pv]+=ranks[pu];
    } else {
        parents[pv] = pu;
        parents[v] = pu;
        ranks[pu]+=ranks[pv];
    }
}


int main() {
    
    int n;
    cin>>n;
    vector<int> parents(n,0);
    for(int i=0;i<n;i++) parents[i] = i;
    vector<int> ranks(n,1);

    for(int i=0;i<n-1;i++) {
        int u,v,w;
        cin>>u>>v>>w;
        if(!isLucky(w)) {
            dsunion(u-1,v-1, parents, ranks);
        }
    }

    ll ans = 0;
    for(int i=0;i<n;i++) {
        if(parents[i]!=i) continue;
        ll x = (ll)ranks[i];
        ll y = n-x;
        ans = ans + x*y*(y-1);
    }
    cout<<ans<<endl;

    return 0;
}

