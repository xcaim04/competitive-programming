// https://dmoj.uclv.edu.cu/problem/2023cencop10a

#include<bits/stdc++.h>
using namespace std ;

#define endl "\n"
#define debug(x) cout << "Debug: " << x << endl;
#define debugs(x, seq) cout << "#" << x << " " << seq[x] << endl;1
using ll = long long;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b;

    while(cin >> a >> b) {
        if(a == 0 && b == 0) break;
        cout << 3*min(a, b) - a - b << endl;
    }

}



/*
    Carlos Javier Blanco Moreira 12 grado
    IPVCE FEDERICO ENGELS
    username: CarlosJavier / xCAIM04
    langs: C++, Python
*/