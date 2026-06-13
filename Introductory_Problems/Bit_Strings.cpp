#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n, res = 1;
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        res = res << 1;
        res %= 1000000007;
    }
    cout << res << endl;
    return 0;
}