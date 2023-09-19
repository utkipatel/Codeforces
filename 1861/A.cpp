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
        if(s[0]=='1') cout<<"13"<<endl;
        else if(s[0]=='2') cout<<"23"<<endl;
        else if(s[0]=='3') cout<<"31"<<endl;
        else if(s[0]=='4') cout<<"43"<<endl;
        else if(s[0]=='5') cout<<"53"<<endl;
        else if(s[0]=='6') cout<<"61"<<endl;
        else if(s[0]=='7') cout<<"73"<<endl;
        else if(s[0]=='8') cout<<"89"<<endl;
        else if(s[0]=='9') cout<<"97"<<endl;
        
    }


    return 0;
}