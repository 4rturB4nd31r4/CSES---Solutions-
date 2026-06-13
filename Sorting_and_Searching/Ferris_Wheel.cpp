#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n, p, x, qnt = 0, res = 0, sum = 0, qntByGondola = 0;
    cin >> n >> p;
    multiset<long long> s;
    for(int i = 0 ; i < n ; i++){
        cin >> x;
        s.insert(x);
    }
    while(qnt < n){
        auto it = s.upper_bound(p - sum);
        if(it == s.begin() || qntByGondola == 2){
            sum = 0;
            res++;
            qntByGondola = 0;
            continue;
        }
        it--;
        sum += *it;
        qntByGondola++;
        qnt++;
        s.erase(it);
    }
    cout << res + 1 << endl;
    return 0;
}