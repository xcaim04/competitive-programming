https://dmoj.uclv.edu.cu/problem/graforueda

/*
    username: xCAIM04 | CarlosJavier
    Grafos Rueda
    lang: C++
*/

#include<bits/stdc++.h>

using namespace std ;



int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int a, i;
    scanf("%d", &a);


    for(i=0;i<a;i++){

        unsigned long long k, n;
        scanf("%llu %llu", &k, &n);
        if(n>=3 && k<=n+1){
            if(n == k) printf("%llu\n", n+1);
            else printf("%llu\n", n);
        }
        else{
            printf("%llu\n", 0);
        }

    }

    return 0;
}