// https://dmoj.uclv.edu.cu/problem/primorial

#include<bits/stdc++.h>
using namespace std;
vector<int>v;
int n;
int mk[10000001];
long long calc(int m){
    long long c=1;
    for(int i=0;i<v.size();i++){
        if(v[i]<=m){
            c*=v[i];
        }
        else{
            break;
        }
    }
    return c;
}
void criba()
{
    for(int i=2;i<sqrt(10000001);i++){
        if(!mk[i]){
            v.push_back(i);
            for(int j=i+i;j<=10000001;j+=i){
                mk[j]=1;
            }
        }
    }
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie();
    criba();
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        cout<<calc(a)<<"\n";
    }
}