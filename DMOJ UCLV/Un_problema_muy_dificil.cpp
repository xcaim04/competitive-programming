// https://dmoj.uclv.edu.cu/problem/22psn2c

#include<bits/stdc++.h>
using namespace std ;

int main() {
    int d;
    cin >> d;
    while(d--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        cout << max(a*b, c*d) << endl;
    }
}