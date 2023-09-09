#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int,int> ipair;

int dsfind(int x, vector<int> &parents) {
    if(parents[x]==x) return x;
    parents[x] = dsfind(parents[x], parents);
    return parents[x];
}

void dsunion(int x, int y, vector<int>&p, vector<int>&r) {
    int px = dsfind(x,p);
    int py = dsfind(y,p);
    if(px==py) return;
    if(r[px]<r[py]) {
        p[px] = py;
    } else {
        p[py] = px;
        if(r[px]==r[py]) r[px]++;
    }
}

int main() {
    int n;
    cin>>n;
    vector<ipair>nodes(n);

    for(int i=0;i<n;i++) cin>>nodes[i].first>>nodes[i].second;
    vector<int> parents(n);
    for(int i=0;i<n;i++) parents[i]=i;
    vector<int> ranks(n,0);

    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++){
            if(nodes[i].first==nodes[j].first || nodes[i].second==nodes[j].second) dsunion(i,j,parents,ranks);
        }
    }
    vector<int> cnts(n,0);
    for(int i=0;i<n;i++){
        cnts[dsfind(i,parents)]=1;
    }
    int ans = 0;
    for(int i=0;i<n;i++) ans+=cnts[i];
    cout<<ans-1<<endl;

    return 0;
}

