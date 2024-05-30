// https://dmoj.uclv.edu.cu/problem/lineup

#include<bits/stdc++.h>
using namespace std ;

const int MAX = 1e5+10;

int treeMaximus[MAX*4], treeMinimun[4*MAX];
#define childLeft node*2
#define childRight node*2+1
#define middle ((left+right)/2)

const int INFINITE = INT_MAX;
const int NEGATIVE_INFINITE = INT_MIN;

void build(int node, int left, int right, int sequence[])
{
    if(left == right){
        treeMaximus[node] = sequence[left];
        treeMinimun[node] = sequence[left];
    } else {

        build(childLeft, left, middle, sequence);
        build(childRight, middle+1, right, sequence);

        treeMinimun[node] = min(treeMinimun[childLeft], treeMinimun[childRight]);
        treeMaximus[node] = max(treeMaximus[childLeft], treeMaximus[childRight]);
    }
}

int queryMaximus(int node, int left, int right, int lq, int rq)
{
    if(left > rq || right < lq) return NEGATIVE_INFINITE;
    if(left>=lq && right<=rq) return treeMaximus[node];
    return max(queryMaximus(childLeft, left, middle, lq, rq), queryMaximus(childRight, middle+1, right, lq, rq));
}

int queryMinimun(int node, int left, int right, int lq, int rq)
{
    if(left > rq || right < lq) return INFINITE;
    if(left>=lq && right<=rq) return treeMinimun[node];
    return min(queryMinimun(childLeft, left, middle, lq, rq), queryMinimun(childRight, middle+1, right, lq, rq));
}

int main()
{

    int n, q;
    cin >> n >> q;

    int arr[n+1];

    for(int i=1;i<=n;++i) {
        cin >> arr[i];
    }

    build(1, 1, n, arr);

    while(q--){
        int a, b;
        cin >> a >> b;
        cout << queryMaximus(1, 1, n, a, b) - queryMinimun(1, 1, n, a, b)<< '\n';
    }

}