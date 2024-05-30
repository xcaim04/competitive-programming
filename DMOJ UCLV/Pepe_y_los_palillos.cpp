// https://dmoj.uclv.edu.cu/problem/2023occcop10a

//Carlos Javier Blanco Moreira
//10mo IPVCE Federico Engels
#include<bits/stdc++.h>
using namespace std ;

string suma(string a, string b) {
   int l = 1 + (a.length() > b.length() ?
   a.length() : b.length());
   string c(l, '0');
   a = string(l - a.length(), '0') + a;
   b = string(l - b.length(), '0') + b;
   int ac = 0, sum = 0;
   for (int i=l-1; i>=0; i--) {
       sum = a[i] + b[i] - '0' - '0' + ac;
       c[i] = (sum % 10) + '0';
       ac = sum / 10;
    }
    while(c.length() > 0 && c[0] == '0')
       c.erase( c.begin() );
return c;
}

int main(){

  string s,d;
  cin >> s >> d;
  cout << suma(s, d);
  return 0;
}