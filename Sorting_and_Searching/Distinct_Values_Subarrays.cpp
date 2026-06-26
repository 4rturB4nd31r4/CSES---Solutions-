#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;
    cin >> n;
    vector<long long> vec(n+1);
    long long qnt = 0, lastQnt = 0;
    unordered_map<long long,long long> umap;
    umap.reserve(n * 2);
    umap.max_load_factor(0.7);
    for(long long i = 1 ; i <= n ; i++) cin >> vec[i];
    for(long long i = 1 ; i <= n ; i++){
        if(i - lastQnt == umap[vec[i]]) lastQnt = i - umap[vec[i]];
        else lastQnt = min(i - umap[vec[i]], lastQnt + 1); 
        qnt += lastQnt;
        umap[vec[i]] = i;
    }
    cout << qnt << endl;
    return 0;
}