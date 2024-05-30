// https://dmoj.uclv.edu.cu/problem/2023orcop10c

/* Program: Multiplo de 3 para la copa */
#include<bits/stdc++.h>
using namespace std ;

#define int long long

int solve(string s) {
    int n = s.length();
    int suma = 0;

    vector<int> dp;

    for(int i=0;i<s.length();i++) {
        suma += (s[i] - '0');
        dp.push_back((s[i] - '0') % 3);
    }

    if(suma % 3 == 0) {
        return 0;
    }

    if(n == 1) {
        return -1;
    }

    if(count(dp.begin(), dp.end(), suma % 3) >= 1) {
        return 1;
    }

    if(n == 2) {
        return -1;
    }

    return 2;

}

main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;

    cout << solve(s);

}