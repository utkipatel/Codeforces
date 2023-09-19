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
        string s;
        cin>>s;
        int n = s.length();
        // stack<int> status; // 1 - inc, 2 non-inc, 3 anything
        // status.push(1);
        vector<int> status;

        bool res = true;
        for(int i=0;i<n;i++) {
            if(s[i]=='+') {
                if(status.size()==0) status.push_back(1);
                else if(status[status.size()-1]==2) status.push_back(2);
                else status.push_back(3);
            }
            else if(s[i]=='-') status.pop_back();
            else if(s[i]=='0') {
                if(status.size()<2) {
                    res = false;
                    break;
                }
                if(status[status.size()-1]==2) continue;
                if(status[status.size()-1]==3) status[status.size()-1] = 2;
                else if(status[status.size()-1]==1) {
                    res = false;
                    break;
                }
            }
            else if(s[i]=='1') {
                if(status.size()==0 || status[status.size()-1]==1) continue;
                else if(status[status.size()-1]==2) {
                    res = false;
                    break;
                } 
                else {
                    // case where last status  == 3
                    int sz = status.size()-1;
                    while(sz>=0 && status[sz]==3) {
                        status[sz]=1;
                        sz--;
                    } 
                }
            }
        }

        if(res) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}