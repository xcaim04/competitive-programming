// https://dmoj.uclv.edu.cu/problem/blots

#include<bits/stdc++.h>
using namespace std ;

const int MAX = 1e6+2;
int n, m;
string s[MAX];
vector<int> mk[MAX];

int cant = 0;

void dfs(int x, int y) {
    if(x < 0 || x >= n || y < 0 || y >= m || mk[x][y] == 1 || s[x][y] == '0') return;
    mk[x][y] = 1;
    ++cant;
    dfs(x+1, y);
    dfs(x-1, y);
    dfs(x, y+1);
    dfs(x, y-1);
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;

    for(int i=0;i<n;i++) {
        cin >> s[i];
        for(int j=0;j<m;j++) mk[i].push_back(0);
    }

    int better = INT_MIN, cont = 0;

    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            if(s[i][j] == '1' && mk[i][j] == 0) {
                dfs(i, j);
                ++cont;
                better = max(better, cant);
                cant = 0;
            }
        }
    }

    cout << cont << ' ' << better;

}