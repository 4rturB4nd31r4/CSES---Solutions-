#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n;
    cin >> n;
    vector<vector<long long>> times;
    for(long long i = 0 ; i < n ; i++){
        long long a,b;
        cin >> a >> b;
        times.push_back({a, 1});
        times.push_back({b,-1});
    }
    sort(times.begin(), times.end());
    long long maxQnt = 0, qnt = 0;
    for(long long i = 0 ; i < times.size() ; i++){
        if(times[i][1] == 1) qnt++;
        else qnt--;
        maxQnt = max(maxQnt, qnt); 
    }
    cout << maxQnt << endl;
    return 0;
}