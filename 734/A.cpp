#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ac=0,dc=0;
    for(char c:s) {
        if(c=='A') ac++;
        else dc++;
    }
    if(ac>dc) cout<<"Anton"<<endl;
    else if(ac<dc) cout<<"Danik"<<endl;
    else cout<<"Friendship"<<endl;
    return 0;
}

