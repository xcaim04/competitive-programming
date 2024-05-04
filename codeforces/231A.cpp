#include<bits/stdc++.h>
using namespace std;

int main() {

    int testcase, count = 0;
    cin >> testcase;
    
    while(testcase > 0) {
        
        int cantPerson = 3;
        int AC[3] = {0, 0};
        
        while(cantPerson > 0) {
            int data;
            cin >> data;
            ++AC[data];
            --cantPerson;
        }
        
        if(AC[1] > 1) {
            ++count;
        }
        --testcase;
    }

    cout << count;
    
    return 0;
}