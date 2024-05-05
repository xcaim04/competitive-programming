//Number of Smaller
#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);

    int n, m; cin >> n >> m;

    vector<int> a(n);
    for(int i=0;i<n;i++) cin >> a[i];

    vector<int> b(m);
    for(int i=0;i<m;i++) cin >> b[i];

    vector<int> res(m);
    int i=0, j=0;
    while(i < n || j < m) {
        if(j == m || i < n && a[i] < b[j]) {
            i++;
        } else {
            res[j++] = i;
        }
    }

    for(int x: res) {
        cout << x << ' ';
    }

}