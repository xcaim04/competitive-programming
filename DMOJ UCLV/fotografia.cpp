// https://dmoj.uclv.edu.cu/problem/photovc

#include<bits/stdc++.h>
using namespace std ;

int main() {
	//ios::sync_with_stdio(0);
	//cin.tie(0);
	
	int n, k;
	cin >> n >> k;
	
	int a[1001], b[1001];
	
	for(int i=0;i<k;i++) {
		cin >> a[i] >> b[i];
		if(a[i] > b[i]) {
			int tmp = a[i];
			a[i] = b[i];
			b[i] = tmp;
		}
	}
	
	int cont = 0, l = 1, r = 0;
	
	while(l <= n) {
		int i = 0, r = n;
		while(i < k) {
			if(l <= a[i] && r >= b[i]) {
				r = b[i] - 1;
			}
			i++;
		}
		cont++;
		l = r + 1;
	}
	
	cout << cont;
	
}