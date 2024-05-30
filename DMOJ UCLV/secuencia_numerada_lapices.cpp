// https://dmoj.uclv.edu.cu/problem/secnum

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
const ll mod = 100000007;

struct matrix{
    ll mat[2][2];
    matrix friend operator *(const matrix &a, const matrix &b){
        matrix c;
        for(int i = 0; i < 2; i++)
        for(int j = 0; j < 2; j++){
            c.mat[i][j] = 0;
            for(int k = 0; k < 2; k++){
                c.mat[i][j] += (a.mat[i][k]*b.mat[k][j])%mod;
                c.mat[i][j] %= mod;
            }
        }
        return c;
    }
};

matrix matpow(matrix base, ll n){
    matrix ans;
    for(int i = 0; i < 2; i++)
        for(int j = 0; j < 2; j++)
            ans.mat[i][j] = (i==j);
    while(n){
        if(n&1)
            ans = ans*base;
        base = base*base;
        n >>= 1;
    }
    return ans;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);

    int t;
    cin >> t;
    ll n;
    matrix base, ans;
    base.mat[0][0] = base.mat[0][1] = base.mat[1][0] = 1;
    base.mat[1][1] = 0;
    while(t--){
        cin >> n;
        ans = matpow(base,n);
        cout << ans.mat[0][0] << ' ';
    }

}