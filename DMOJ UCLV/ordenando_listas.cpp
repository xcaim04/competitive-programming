// https://dmoj.uclv.edu.cu/problem/2023occcop10bb

/* Program: Ordenando Listas */
#include<bits/stdc++.h>
using namespace std ;

#define int long long

int lista1[2001], lista2[2001];
int counts = 0;

main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    for(int i=1;i<=n;i++) {
        cin >> lista1[i];
    }

    for(int i=1;i<=m;i++) {
        cin >> lista2[i];
    }

    for(int i=1;i<=n;i++) {
        for(int j=i+1;j<=n;j++) {
            if(lista1[i] > lista1[j]) {
                counts++;
                swap(lista1[i], lista1[j]);
            }
        }
    }

    int countSortList1 = counts;
    counts = 0;
    
    for(int i=1;i<=m;i++) {
        for(int j=i+1;j<=m;j++) {
            if(lista2[i] > lista2[j]) {
                counts++;
                swap(lista2[i], lista2[j]);
            }
        }
    }

    int countSortList2 = counts;

    if(countSortList1 < countSortList2) {
        cout << countSortList1;
    }
    else cout << countSortList2;

}