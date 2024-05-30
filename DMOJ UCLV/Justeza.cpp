// https://dmoj.uclv.edu.cu/problem/justeza

#include<bits/stdc++.h>
using namespace std ;

#define len(x) (int) x.size()
#define all(x) x.begin(), x.end()
#define endl '\n'
using ll = long long ;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll a, b, c, k;

    const ll INF = 1e18;

    cin >> a >> b >> c >> k;

    ll res;
    
    if(k%2==0)
    {
        res = a - b;
    } else res = b - a;
    
    if(res > INF) cout << "Unfair";
    else cout << res;

}