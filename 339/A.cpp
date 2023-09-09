#include<bits/stdc++.h>

using namespace std;

int main() {
    string ori;
    cin>>ori;
    if(ori.length()==0) return 0;
    string x;
    stringstream ss(ori);
    vector<string> v;
    while(getline(ss, x,'+')) {
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    cout<<v[0];
    string res=v[0];
    for(int i=1;i<v.size();i++){
        cout<<'+';
        cout<<v[i];
    }

    return 0;

}

