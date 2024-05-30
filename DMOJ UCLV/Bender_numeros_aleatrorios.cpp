// https://dmoj.uclv.edu.cu/problem/bender

#include<bits/stdc++.h>
using namespace std ;

int main() {

    int n;
    cin >>n;

    n *= n;
    
    cout << n % (int) 1e6 / (int) 1e2;

    return 0;
}