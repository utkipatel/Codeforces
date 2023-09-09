#include<bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin>>s;
    string su(s);
    string sl(s);
    int lc=0,uc=0;
    int len = s.length();
    for(int i=0;i<len;i++) {
        sl[i] = tolower(s[i]);
        su[i] = toupper(s[i]);
        if(s[i]!=sl[i]) lc++;
        if(s[i]!=su[i]) uc++;
    }

    if(lc<=uc) cout<<sl<<endl;
    else cout<<su<<endl;

    return 0;
}

