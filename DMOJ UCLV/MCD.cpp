// https://dmoj.uclv.edu.cu/problem/mcd

#include "bits/stdc++.h"
using namespace std;

const int mxn = 1e6 + 10;
const int mxe = log2(mxn);
const int inf = 1e9 + 10;

int mcd[mxn][mxe]; int log_2; int n;

int query(int a,int b){
    return __gcd(mcd[a][log_2] , mcd[b - (1 << log_2) + 1][log_2]);
}

bool mk(int x){
    log_2 = (int)log2(x);

    for(int i=x-1;i<2*n;i++){
        if(query(i - x + 1,i) != 1){
            return 1;
        }
    }

    return 0;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cin>>n;

    for(int i=0;i<n;i++){
        cin>>mcd[i][0]; mcd[i+n][0] = mcd[i][0];
    }

    for(int j=1;(1 << j) <= 2 * n;j++){
        for(int i=0;i + (1 << j) - 1 < 2 * n;i++){
            mcd[i][j] = __gcd(mcd[i][j-1] , mcd[i + (1 << (j - 1))][j - 1]);
        }
    }

    int left = 1; int right = n;

    while(left <= right){
        int med = (left + right) >> 1;

        if(mk(med)){
            left = med + 1;
        }
        else{
            right = med - 1;
        }
    }

    printf("%d\n",right != n ? right : -1);

    return 0;
}