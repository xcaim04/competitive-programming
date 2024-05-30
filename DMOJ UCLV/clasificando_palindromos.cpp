// https://dmoj.uclv.edu.cu/problem/clasipal

////Clasificando palindromes
#include<bits/stdc++.h>
#define int unsigned long long
using namespace std;
const int b=73;
int n;
int h[100000],p[100000],hr[100000];
string s;
void has()
{
    for(int i=1;i<s.size();i++){
        h[i]=h[i-1]*b+s[i];
        p[i]=p[i-1]*b;
        hr[i]=hr[i-1]*b+s[s.size()-i];
    }
}
inline int calc(int a,int b)
{
    return h[b]-h[a-1]*p[b-a+1];
}
inline int calc1(int a,int b)
{
    return hr[b]-hr[a-1]*p[b-a+1];
}
main()
{
    cin>>n;
    while(n--){
        cin>>s;
        s=" "+s;
        h[0]=0;
        hr[0]=0;
        p[0]=1;
        has();
        if(calc1(1,s.size()-1)==calc(1,s.size()-1)){
            cout<<"palindrome"<<"\n";
        }
        else{
            int mk=0;
            for(int i=1;i<s.size();i++){
                if(calc(1,i)==calc1(s.size()-i,s.size()-1) and calc(i+1,s.size()-1)==calc1(1,s.size()-i-1)){
                    cout<<"bi-palindrome"<<"\n";
                    mk=1;
                    break;
                }
            }
            if(mk==0){
                cout<<"non-palindrome"<<"\n";
            }
        }
    }

}