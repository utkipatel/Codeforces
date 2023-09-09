#include<bits/stdc++.h>

using namespace std;

int main() {
    int n,h;
    cin>>n>>h;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int x:a) 
        if(x>h) n++;
    cout<<n<<endl;
    return 0;
}

