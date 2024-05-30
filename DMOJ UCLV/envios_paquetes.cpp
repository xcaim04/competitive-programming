// https://dmoj.uclv.edu.cu/problem/envpaq

#include<bits/stdc++.h>
using namespace std ;

#define MAX 50001

int dist[MAX];
bool mark[MAX];

vector<pair<int, int> > v[MAX];

void distra(int node){
    dist[node] = 0;
    priority_queue<pair<int, int> > q;
    q.push({0, node});
    int ac;
    while(!q.empty()){

        ac = q.top().second;
        q.pop();

        if(!mark[ac]){

            mark[ac] = 1;
            for(auto u: v[ac]){
                int b = u.first;
                int w = u.second;
                if(dist[b] > dist[ac]+w){
                    dist[b] = dist[ac] + w;
                    q.push({-dist[b], b});
                }
            }

        }

    }
}


int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);


    int n, m;
    scanf("%d%d", &n, &m);

    for(int i=0;i<m;i++){
        int a, b, c;
        scanf("%d%d%d", &a, &b, &c);
        v[a].push_back(make_pair(b, c));
        v[b].push_back(make_pair(a, c));
    }


    for(int i=1;i<=n;i++) dist[i] = 1e9;

    distra(1);

    cout<<dist[n];


    return 0;
}