// https://dmoj.uclv.edu.cu/problem/pails

#include<bits/stdc++.h>
using namespace std;

typedef pair<int, int> ii;
typedef vector<int> vi;
typedef long long ll;
#define all(x) (x).begin(),(x).end()

const int nmax = 1001;
bool can[nmax];

int main()
{
    ios_base::sync_with_stdio (0);
    cin.tie (0);

    //freopen("","r",stdin);
    //freopen("","w",stdout);

    int a, b, m;
    cin >> a >> b >> m;

    can[0] = true;
    for (int i = 0; i < m; ++i)
    {
        if (!can[i])
            continue;
        if (i + a <= m)
            can[i + a] = true;
        if (i + b <= m)
            can[i + b] = true;
    }
    for (int i = m; i >= 0; --i)
        if (can[i])
        {
            cout << i;
            break;
        }

    return 0;
}