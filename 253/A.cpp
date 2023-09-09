#include<bits/stdc++.h>

typedef long long ll;
using namespace std;

int main() {
    int n,m;
    ifstream ifile;
    ofstream ofile;
    ifile.open("input.txt");
    ofile.open("output.txt");
    ifile>>n>>m;

    // scanf("%d %d",&n,&m);
    if(n>m) {
        for(int i=1;i<=m;i++) ofile<<"BG";
        for(int i=m+1;i<=n;i++) ofile<<"B";
    } else {
        for(int i=1;i<=n;i++) ofile<<"GB";
        for(int i=n+1;i<=m;i++) ofile<<"G";
    }
    ofile<<endl;
    return 0;
}

