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
        vector<int> arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];

        vector<int> posCosts(n,0);
        for(int i=n-2;i>=0;i--) {
            if(arr[i]>=arr[i+1]) posCosts[i] = 1+posCosts[i+1];
            else posCosts[i] = posCosts[i+1];
        } 

        vector<int> negCosts(n,1);
        for(int i=1;i<n;i++) {
            if(arr[i]>=arr[i-1]) negCosts[i] = 1+negCosts[i-1];
            else negCosts[i] = negCosts[i-1];
        }

        int res = min(negCosts[n-1], posCosts[0]);
        for(int i=0;i<n-1;i++) {
            res = min(res, negCosts[i] + posCosts[i+1]);
        }
        cout<<res<<endl;

    }
    return 0;
}