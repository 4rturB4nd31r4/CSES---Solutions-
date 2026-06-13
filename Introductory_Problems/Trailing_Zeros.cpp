#include <bits/stdc++.h>

using namespace std;

int main(){
    long long power = 5, res = 0, n;
    cin >> n;
    while(n/power != 0){
        res += n/power;
        power *= 5;
    }
    cout << res << endl;
}