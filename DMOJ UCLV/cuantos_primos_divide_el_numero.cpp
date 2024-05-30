// https://dmoj.uclv.edu.cu/problem/primdivisors

#include<bits/stdc++.h>
using namespace std ;

vector<int> pr; ///Primos

void criba(){ ///   Criba O(N)
    const int N = 100000;
    vector<int> lp(N+1);

    for (int i=2; i <= N; ++i) {
        if (lp[i] == 0) {
            lp[i] = i;
            pr.push_back(i);
        }
        for (int j=0; j < (int)pr.size() && pr[j] <= lp[i] && i*pr[j] <= N; ++j) {
            lp[i * pr[j]] = pr[j];
        }
    }

}

int calc(int n){
    int cont = 0;
    for(auto u: pr){
        if(u<=n && n%u==0) ++cont;
    }
    return cont;
}

main(){


    int t;
    cin>>t;

    criba();

    while(t--){

        int a;

        cin>>a;

        cout<<calc(a)<<'\n';

    }


}