#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);

    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    for(int i=0;i<n;i++) cin >> a[i];

    vector<int> b(m);
    for(int i=0;i<m;i++) cin >> b[i];

    int i = 0, j = 0;

    vector<int> c;

    while(i < a.size() || j < b.size()) {
        if(j == b.size() || i < a.size() && a[i] <= b[j]) {
            c.push_back(a[i++]);
        }
        else {
            c.push_back(b[j++]);
        }
    }

    for(int x: c) {
        cout << x << ' ';
    }

}