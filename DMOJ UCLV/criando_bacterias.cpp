// https://dmoj.uclv.edu.cu/problem/raising

#include<bits/stdc++.h>
using namespace std ;

#define int long long

main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int counts = 0;

    while(n) {
        if(n % 2 != 0) {
            counts++;
        }
        n /= 2;
    }

    cout << counts;

}