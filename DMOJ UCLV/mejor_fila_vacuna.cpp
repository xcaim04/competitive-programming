// https://dmoj.uclv.edu.cu/problem/bclgold

#include<bits/stdc++.h>
using namespace std ;

int cont = 0;

inline void print(char x) {
	if(cont == 80) {
		cout << '\n';
		cont = 0;
	}
	cout << x;
	cont++;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	
	char s[n+1];
	
	for(int i=0;i<n;i++) cin >> s[i];
	
	int l = 0, r = n - 1;
	
	while(r >= l) {
		if(s[l] < s[r]) {
			print(s[l]);
			l++;
		} else if(s[r] < s[l]){
			print(s[r]);
			r--;
		}
		else {
			int a = l, b = r;
			while(b - a > 1 && s[a] == s[b]) {
				a++;
				b--;
			}
			
			if(s[a] < s[b]) {
				print(s[l]);
				l++;
			}
			else {
				print(s[r]);
				r--;
			}
			
		}
	}
	
}
