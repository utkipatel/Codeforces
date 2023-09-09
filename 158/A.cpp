#include<bits/stdc++.h>

using namespace std;

int main() {
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int thr = arr[k-1];
    int i=0;
    for(;i<n;i++) {
        if(arr[i]==0 || arr[i]<thr) break;
    }
    cout<<i<<endl;

    return 0;
}

