#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;
    cin >> n;
    vector<long long> vec(n+1);
    for(long long i = 1 ; i <= n ; i++) cin >> vec[i];
    unordered_map<long long,long long> map;
    map.reserve(n * 2);
    map.max_load_factor(0.7);
    long long qntMax = 1, qntUlt = 1;
    for(long long i = 1 ; i <= n ; i++){
        qntUlt = min(qntUlt + 1, i - map[vec[i]]);
        map[vec[i]] = i;
        qntMax = max(qntMax, qntUlt);
    }
    cout << qntMax << '\n';

    return 0;
}