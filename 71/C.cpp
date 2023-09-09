#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int,int> ip;


// void fun(int x, vector<int>&primes) {
//     for(int i=2;i*i<=x;i++) {
//         if(x%i==0) {
//             primes.push_back(i);
//             while(x%i==0) x/=i;
//         }
//     }

//     if(x!=1) primes.push_back(x);
// }

void fun(int x, vector<int>&primes) {
    for(int i=2;i<=x;i++) {
        if(x%i==0) primes.push_back(i);
    }
}


int main() {
    int n;
    cin>>n;
    vector<int> arr(n,0);
    for(int i=0;i<n;i++) cin>>arr[i];
    vector<int> primes;
    primes.push_back(1);
    fun(n, primes);
    // for(int f:primes) cout<<f<<" ";
    // cout<<endl;
    bool ans = false;
    for(int p:primes) {
        // if(n/f < 3) continue;
        if(p<=2) continue;
        int bf = n/p;
        for(int off=0;off<bf;off++) {
            bool tmp = true;
            int st = off;
            for(int i=0;i<p;i++) {
                if(arr[st] == 0) {
                    tmp=false;
                    break;
                }
                st=(st+bf)%n;
            }
            if(tmp==true) {
                // cout<<"f = "<<f<<endl;
                // cout<<"off = "<<off<<endl;
                ans = true;
                break;
            }
        }
        if(ans) break;
    }
    if(ans==true) cout<<"YES\n";
    else cout<<"NO\n";

    return 0;
}

