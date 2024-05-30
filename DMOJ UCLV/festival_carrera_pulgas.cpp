// https://dmoj.uclv.edu.cu/problem/festp

#include<bits/stdc++.h>
using namespace std ;

#define endl "\n"
#define debug(x) cout << "Debug: " << x << endl;
#define debugs(x, seq) cout << "#" << x << " " << seq[x] << endl;1
using ll = long long;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;

    int cont = 0, cont1 = 0;

    for(auto u: s) {
        bool flag = false;
        for(auto i: {'A', 'E', 'I', 'O', 'U'}) {
            if(u == i) {
                ++cont;
                flag = false;
                break;
            }
            else flag = true;
        }
        if(flag) cont1++;
    }

    cout << cont << " " << cont1;
}



/*
    Carlos Javier Blanco Moreira 12 grado
    IPVCE FEDERICO ENGELS
    username: CarlosJavier / xCAIM04
    lang: C++, Python
*/