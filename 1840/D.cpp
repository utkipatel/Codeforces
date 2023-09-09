#include<bits/stdc++.h>

typedef long long ll;
using namespace std;


bool check(int tar, vector<int>&arr) {
    int c1=-1,c2=-1,c3=-1;
    c1 = arr[0]+tar;
    for(int i=0;i<arr.size();i++) {
        if(abs(arr[i]-c1)<=tar) continue;
        if(c2==-1) {
            c2 = arr[i]+tar;
            continue; 
        }
        if(abs(arr[i]-c2)<=tar) continue;
        if(c3==-1) {
            c3 = arr[i]+tar;
            continue;
        }
        if(abs(arr[i]-c3)<=tar) continue;

        return false;
    }
    return true;
}

int main() {
    int t;
    cin>>t;
    while(t>0) {
        int n;
        cin>>n;
        vector<int> arr(n,0);
        for(int i=0;i<n;i++) cin>>arr[i];

        sort(arr.begin(), arr.end());
        int st=0;
        int en = 1e9;
        int ans;
        int mid;
        while(st<=en) {
            int mid = (st+en)/2;
            bool haha = check(mid, arr);
            if(haha) {
                ans = mid;
                en=mid-1;
            } else {
                st=mid+1;
            }
        }

        cout<<ans<<endl;

        t--;
    }
    return 0;
}

