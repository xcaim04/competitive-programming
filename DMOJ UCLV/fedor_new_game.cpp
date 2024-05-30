// https://dmoj.uclv.edu.cu/problem/fgame

#include<bits/stdc++.h>
using namespace std ;

#define endl "\n"

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m, k;
    cin >> n >> m >> k;

    int arr[m+1];

    for(int i=0;i<m+1;i++) {
        cin >> arr[i];
    }

    int curr = 0;

    for(int i=0;i<m;i++) {
        int cont = 0;
        for(int j=0;j<n;j++) {
            if((arr[i] >> j & 1) != (arr[m] >> j & 1)) ++cont;
        }
        if(cont <= k) ++curr;
    }

    cout << curr;

}