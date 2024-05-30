// https://dmoj.uclv.edu.cu/problem/dima

#include<bits/stdc++.h>
using namespace std;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    long long aux=0,res=0,b;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>b;
        res+=abs(b-aux);
        aux=b;
        
    }
    cout<<res;


}