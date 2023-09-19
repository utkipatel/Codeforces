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
        scanf("%d", &n);
        vector<int> arr(n);
        int tmp;
        for(int i=0;i<n;i++) 
            cin>>arr[i];

        // sort(arr.begin(), arr.end());
        bool haszero = false;
        if(arr[0]==0) haszero = true;

        if(!haszero) {
            cout<<"0"<<endl;
            int response;
            cin>>response;            
        } else {
            int i=0;
            while(i<n && arr[i]==i) i++;
            cout<<i<<endl;

            int response;
            while(true) {
                cin>>response;
                if(response==-1) break;
                cout<<response<<endl;
            }
        }

    }

    return 0;
}