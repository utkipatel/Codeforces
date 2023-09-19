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
        string s1,s2;
        cin>>s1;
        cin>>s2;
        int n = s1.length();
        bool res = false;
        for(int i=0;i<n-1;i++) {
            if(s1[i]=='0' && s1[i+1]=='1' && s2[i]=='0' && s2[i+1]=='1') {
                res = true;
                break;
            }
        }
        if(res) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    return 0;
}