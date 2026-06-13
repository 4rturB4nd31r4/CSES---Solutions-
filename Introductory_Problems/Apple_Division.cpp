#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long> apples(n);
    long long total_sum = 0;
    for(int i = 0 ; i < n ; i++){
        cin >> apples[i];
        total_sum += apples[i];
    }
    long long target = 1LL << n;
    long long min_diff = total_sum;
    for(long long i = 0 ; i <= target ; i++){
        long long sum = 0;
        for(int l = 0; l < n ; l++){
            if(i & (1 << l)) sum += apples[n-1-l];
        }
        if(abs(total_sum - 2*sum) < min_diff) min_diff = abs(total_sum - 2*sum); 
    }
    cout << min_diff << endl;
    return 0;
}