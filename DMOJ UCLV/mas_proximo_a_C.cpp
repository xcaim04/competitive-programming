// https://dmoj.uclv.edu.cu/problem/prox

#include<iostream>
#include<set>
#include<algorithm>
#include<math.h>
#include<cmath>

using std::cin;
using std::cout;

#define all(x) x.begin(), x.end()
#define allArr(x) begin(x), end(x)
#define MAX(a, b) (a < b ? b : a)
#define MIN(a, b) (a < b ? a : b)

std::set<int> arr;

int main() {

    std::ios_base::sync_with_stdio(0);
    cin.tie(0);

    int a, b, c;
    cin >> a >> b >> c;

    arr.insert(a+a), arr.insert(a*a), arr.insert(b+b),
    arr.insert(b*b), arr.insert(a+b), arr.insert(a*b);

    auto pos = arr.lower_bound(c);

    if(*pos > c) {
        auto left = pos;
        if(pos != arr.begin()){
            left = --pos;
            pos++;
        }
        int tmp = 0, next = 0;
        if(*left < 0) {
            tmp = abs(*left)*2;
        }
        else
            tmp = abs(*left-c);
        next = abs(*pos-c);

        if(tmp > next) {
            cout << *pos;
        } else {
            cout << *left;
        }
    }

    else if(*pos == c) cout << *pos;
    else {
        int num = 0;
        for(auto next: arr) {
            if(next < c) {
                num = next;
            }
        }
        cout << num;
    }

}