#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n;
    cin >> n;
    vector<long long> vec(n), ans(n);
    for(long long i = 0 ; i < n ; i++) cin >> vec[i];
    ans[0] = vec[0];
    long long maximum = ans[0];
    for(long long i = 1 ; i < n ; i++){
        ans[i] = max(vec[i], vec[i] + ans[i-1]);
        maximum = max(maximum, ans[i]);
    } 
    cout << maximum << endl;
    return 0;
}
