// https://dmoj.uclv.edu.cu/problem/readsj

#include<bits/stdc++.h>
using namespace std ;

#define endl "\n"
#define debug(x) cout << "Debug: " << x << endl;
#define debugs(x, seq) cout << "#" << x << " " << seq[x] << endl;1
using ll = long long;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, v;

    cin >> n >> v;

    while(v--) {
        int a, b, c;
        cin >> a >> b >> c;

        int cont = 0, i = 0, ans = 0;
        while(true) {
            if(cont == b) {
                ans += c;
                cont = 0;
            }
            i += a;
            ans ++;
            cont ++;
            if(i >= n) {
                cout << ans << endl;
                break;
            }
        }
    }

}



/*
    Carlos Javier Blanco Moreira 12 grado
    IPVCE FEDERICO ENGELS
    username: CarlosJavier / xCAIM04
    lang: C++, Python
*/