#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long x, n;
    cin >> x >> n;
    set<long long> s;
    unordered_map<long long,long long> umap;
    umap.reserve(n * 2);
    umap.max_load_factor(0.7);
    multiset<long long> res;
    res.insert(x);
    umap[-1] = x;
    for(long long i = 0 ; i < n ; i++){
        long long v;
        cin >> v;
        auto it = s.upper_bound(v);
        long long end;
        if(it == s.end()){
            umap[v] = umap[-1] - x + v;
            end = -1;
        }
        else{
            umap[v] = v + umap[*it] - *it;
            end = *it; 
        }
        res.erase(res.find(umap[end]));
        umap[end] -= umap[v];
        res.insert(umap[end]);
        res.insert(umap[v]);
        s.insert(v);
        cout << *res.rbegin() << " ";
    }
    cout << endl;
    return 0;
}