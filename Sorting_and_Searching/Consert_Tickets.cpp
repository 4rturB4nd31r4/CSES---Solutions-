#include <bits/stdc++.h>

using namespace std;

int main(){
    long long t, p;
    cin >> t >> p;
    vector<long long> ans;
    multiset<long long> s;
    for(long long i = 0 ; i < t ; i++){
        long long x;
        cin >> x;
        s.insert(x);
    }
    for(long long i = 0 ; i < p ; i++){
        long long x;
        cin >> x;
        auto it = s.upper_bound(x);
        if(it == s.begin()) ans.push_back(-1);
        else{
            it--;
            ans.push_back(*it);
            s.erase(it);
        } 
    }
    for(long long a : ans) cout << a << endl;
    return 0;
}