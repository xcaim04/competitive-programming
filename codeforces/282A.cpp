#include<bits/stdc++.h>
using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    int testcase;

    cin >> testcase;

    int ans_problem = 0;

    while(testcase) {

        string s;
        cin >> s;

        int count_plus = count(s.begin(), s.end(), '+');
        int count_minus = count(s.begin(), s.end(), '-');

        ans_problem += (count_plus != 0 ? count_plus-1 : -(count_minus-1));

        --testcase;
    }

    cout << ans_problem;

}