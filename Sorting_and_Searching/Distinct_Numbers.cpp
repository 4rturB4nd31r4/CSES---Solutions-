#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n, x;
    cin >> n;
    set<long long> s;
    for(int i = 0 ; i < n ; i++){
        cin >> x;
        s.insert(x);
    }
    cout << s.size()  << endl;
    return 0;
}