#include<bits/stdc++.h>
#define PB push_back
#define MP make_pair

using namespace std;

typedef long long ll;
typedef pair<int,int> ipair;

// comparator to be used in priority_queue
class Compare {
public:
    bool operator()(ipair p1, ipair p2)
    { 
        return true;
    }
};

// comparator to be used in vectors
bool comp(ipair a, ipair b) {
    return true;
}


int main() {
    // use incase of dealing with file for input/output
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin>>t;
    while(t-- >0) {
        int n;
        cin>>n;
        string s;
        cin>>s;
        string res(n+1,'0');

        int nd = 0;
        for(int i=0;i<n/2;i++) 
            if(s[i]!=s[n-i-1]) nd++;
        
        if(n%2==0) {
            for(int i=nd;i<=n/2;i+=2) res[i] = '1';
            for(int i=0;i<=n/2;i++) res[n-i] = res[i];
        } else {
            for(int i=nd;i<=n/2;i++) res[i] = '1';
            for(int i=0;i<=n/2;i++) res[n-i] = res[i];
        }

        cout<<res<<endl;

        
    }
    return 0;
}