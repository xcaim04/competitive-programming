// https://dmoj.uclv.edu.cu/problem/abc

#include<bits/stdc++.h>
using namespace std ;
#define all(x) x.begin(), x.end()
#define UNIQUE(x) x.resize(unique(all(x)) - x.begin())

void solve(){
    int n; cin>>n;
    int cont = 0;
    for(int i=1;i<=n;++i){
        for(int j=1;i*j<=n;++j){
            for(int k=1;k*j*i<=n;++k){
                ++cont;
            }
        }
    }
    cout<<cont;
}


main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
}