// https://dmoj.uclv.edu.cu/problem/stumps

#include<bits/stdc++.h>
using namespace std ;

#define endl "\n"
#define debug(x) cout << "Debug: " << x << endl;
#define debugs(x, seq) cout << "#" << x << " " << seq[x] << endl;1
using ll = long long;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int arr[50001];

    for(int i=1;i<=n;++i) {
        cin >> arr[i];
    }

    //sort(arr+1, arr+n+1);

    for(int i=1;i<=n;i++) {
        if(arr[i] >= arr[i+1] && arr[i] >= arr[i-1]) cout << i << endl;
    }

}