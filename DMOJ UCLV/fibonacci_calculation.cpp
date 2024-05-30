// https://dmoj.uclv.edu.cu/problem/fibonaccicalculatio

#include<bits/stdc++.h>
using namespace std ;

#define int unsigned long long
#define xCAIM04 main

map<int, int> f;

const int mod = 1e9+7;

int dp(int n)
{
    if(n == 0) return 0;
    if(n == 2 || n == 1) return (f[n]=1);
    if(f.count(n)) return f[n];

    int mid = (n & 1) ? (n+1)/2 : n / 2;

    f[n] = (n & 1) ? ((dp(mid) * dp(mid) % mod) + (dp(mid-1) * dp(mid-1) % mod) % mod) :
        ((2 * dp(mid-1) +  dp(mid)) % mod * dp(mid)) % mod;
    return f[n] % mod;

}

int sol(int n)
{
    return dp(n+2) - 1;
}

void solution(int a, int b)
{
    if(a-1 <= 0) cout << sol(b) << '\n';
    else cout << (sol(b) - sol(a-1) + mod) % mod << '\n';
    f.clear();
}

xCAIM04()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int tc, a, b;
    cin >> tc;


    while(tc--) {
        cin >> a >> b;
        solution(a, b);
    }
}