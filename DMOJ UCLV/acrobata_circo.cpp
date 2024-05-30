// https://dmoj.uclv.edu.cu/problem/acrobat

#include "bits/stdc++.h"

using namespace std ;

int N, M;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M;

    int sol = 0, maxx = INT_MIN;

    vector<char> v;

    while(sol != M) {
        if(M > sol){
          sol += N;
          v.push_back('+');
        }
        else if(M < sol) {
            sol -= M;
            v.push_back('-');
        }
        maxx = max(maxx, sol);
    }

    cout << maxx << '\n';

    if(sol == M) v.push_back('-');

    for(auto u: v)
        cout << u;

}