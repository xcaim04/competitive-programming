// https://dmoj.uclv.edu.cu/problem/oci22day1b

#include<bits/stdc++.h>
using namespace std ;

int n;

bool check(int arr[], int n){
    int mid = (n + 1) / 2;

    return (arr[mid] > arr[n] && arr[1] > arr[mid]);

}

void sub_task(int arr[], int n){
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    int cont = 0;

    for(int i=a;i<=b;i++){
        for(int j=c;j<=d;j++){
            if(arr[i] > arr[j]) ++cont;
        }
    }
    cout<<cont<<'\n';
}

void decre(int arr[], int n){
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    int cont = 0;

    vector<int> v1, v2;

    for(int i=a;i<=b;i++){
        v1.push_back(arr[i]);
    }

    for(int i=c;i<=d;i++){
        v2.push_back(arr[i]);
    }

    for(auto u: {v1.back()}){

        int l = 0, r = v1.size() - 1;

        while(l <= r){

            if(l == r && u > v2[l]) ++cont;
            else{
               if(u > v2[l]) ++cont;
               if(u > v2[r]) ++cont;
            }


            r--, l++;
        }

    }

    for(int i=0;i<v1.size()-1;i++){
        cont *= 2;
        cont++;
    }

    cout<<cont<<'\n';

}

void solve(int arr[], int n, int q){

    int t = q;
    while(t--){

        if(!check(arr, n) || n <= 300 && q <= 300){
            sub_task(arr, n);
        } else {

            decre(arr, n);

        }

    }
}

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    cin>>n;

    int arr[n+1];

    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }

    int q;
    cin>>q;

    solve(arr, n, q);


}