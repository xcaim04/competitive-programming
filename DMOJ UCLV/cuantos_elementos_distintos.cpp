// https://dmoj.uclv.edu.cu/problem/oci22day2a

#include<bits/stdc++.h>
using namespace std ;

using ll = long long;

int main()
{

    int a;
    cin>>a;

    int arr[a+1];

    for(int i=1;i<=a;++i)
        cin>>arr[i];

    ll sum = 0;

    for(int i=1;i<=a;++i){
        set<int> SET;
        for(int j=i;j<=a;++j){
            SET.insert(arr[j]);
            sum += SET.size();
        }

    }

    cout<<sum;

}