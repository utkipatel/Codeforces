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
        vector<ipair> arr(n);
        int tmp=0;

        for(int i=0;i<n;i++) {
            cin>>tmp;
            arr[i] = make_pair(tmp, i);
        }

        vector<int> res(n,0);

        sort(arr.begin(), arr.end());
        for(int i=0;i<n;i++) {
            res[arr[i].second] = i;
        }

        for(int i=0;i<n;i++) cout<<n-res[i]<<" ";
        cout<<endl;
    }

    return 0;
}