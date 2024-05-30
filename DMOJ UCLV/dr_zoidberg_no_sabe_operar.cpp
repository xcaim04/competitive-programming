// https://dmoj.uclv.edu.cu/problem/zoidberg

#include<bits/stdc++.h>

using std::cin;
using std::cout;

int main() {
    std::ios::sync_with_stdio(0);
    cin.tie(0);

    int n, sum = 0, resto = 0;
    cin >> n;
    std::vector<int> pilas(n), sub(n);

    for(int i=0;i<n;i++) {
        cin >> pilas[i];
        sum += pilas[i];
        sub[i] = i+1;
    }

    if(sum != (n*(n+1)/2)) {
        cout << "No";
        return 0;
    }
    else {
        for(int i=0;i<n;++i) {
            if(pilas[i] == sub[i]) continue;
            else {
                if(pilas[i] > sub[i]) {
                    resto += pilas[i] - sub[i];
                    pilas[i] = sub[i];
                }
                else if(pilas[i] < sub[i] && resto > 0) {
                    if(resto + pilas[i] >= sub[i]) {
                        resto -= abs(sub[i] - pilas[i]);
                    } else {
                        cout << "No";
                        return 0;
                    }
                }
                else if(pilas[i] < sub[i] && resto <= 0){
                    cout << "No";
                    return 0;
                }
            }
        }
    }

    if(resto == 0) {
        cout << "Si";
    }


}