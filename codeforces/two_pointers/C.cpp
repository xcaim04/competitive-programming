#include<bits/stdc++.h>
using namespace std;

#define int long long

main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m; cin >> n >> m;

    vector<int> a(n);
    for(int i=0;i<n;i++) cin >> a[i];

    vector<int> b(m);
    for(int i=0;i<m;i++) cin >> b[i];

    vector<int> vswap;

    if(n < m) {
        vswap = a;
        a = b;
        b = vswap;
    }

    int j = 0;
    map<int, int> counter, fr; // value -> frecuency

    for(int i=0;i<b.size();i++) {
        counter[b[i]]++;
    }

    for(int i=0;i<a.size();i++) {
        fr[a[i]]++;
    }

    long long res = 0;

    for(auto x: counter) {
        //cout << x.first << " " << fr[x.first] << " " << x.second << endl;
        res += (fr[x.first] * x.second);
    }

    cout << res;

}

/*
8 7
1 1 3 3 3 5 8 8
1 3 3 4 5 5 5
*/