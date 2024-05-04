#include<bits/stdc++.h>
using namespace std;

int main() {

    int testcase;
    cin >> testcase;

    while(testcase > 0) {
        string word;
        cin >> word;
        if(word.size() > 10)
            cout << word[0] << word.size() - 2 << word[word.size()-1] << '\n';
        else
            cout << word << '\n';
        --testcase;
    }
    
    return 0;
}