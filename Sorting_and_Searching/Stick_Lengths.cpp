#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n;
    cin >> n;
    vector<long long> vec(n);
    for(long long i = 0 ; i < n ; i++) cin >> vec[i];
    sort(vec.begin(), vec.end());
    long long median;
    if(n % 2){
        median = vec[n/2]; 
    }
    else{
        median = (vec[n/2] + vec[(n/2) - 1])/2;
    }
    long long cost = 0;
    for(long long i = 0 ; i < n ; i++) cost += abs(median - vec[i]);
    cout << cost << endl;
    return 0;
}