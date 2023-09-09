#include<bits/stdc++.h>

using namespace std;

bool fun(int x) {
    int a[10]={0};
    int cnt=0;
    while(x>0) {
        a[x%10]=1;
        x/=10;
    }
    for(int i=0;i<10;i++) cnt+=a[i];
    return cnt==4;
}

int main() {
    int y;
    cin>>y;
    y++;
    while(fun(y)==false) {
        y++;
    }
    cout<<y<<endl;
    return 0;
}

