#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n;
    cin >> n;
    vector<long long> vec(n);
    for(long long i = 0 ; i < n ; i++) cin >> vec[i];
    sort(vec.begin(), vec.end());
    long long x = vec[0];
    if(x != 1){
        cout << 1 << endl;
        return 0;
    }
    for(long long i = 1 ; i < n ; i++){
        if(x >= vec[i] - 1) x = x + vec[i];
        else{
            cout << x + 1 << endl;
            return 0;
        }
    }
    cout << x + 1 << endl;
    return 0;
}