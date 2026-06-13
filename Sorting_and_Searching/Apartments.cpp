#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n, m , k, result = 0;
    cin >> n >> m >> k;
    vector<long long> pessoas(n);
    vector<long long> aps(m);
    for(long long i = 0 ; i < n ; i++) cin >> pessoas[i];
    for(long long i = 0 ; i < m ; i++) cin >> aps[i];
    sort(pessoas.begin(), pessoas.end());
    sort(aps.begin(), aps.end());
    long long ptr1 = 0, ptr2 = 0;
    while(ptr1 < n && ptr2 < m){
        if(pessoas[ptr1] - k <= aps[ptr2] && pessoas[ptr1] + k >= aps[ptr2]){
            ptr1++;
            ptr2++;
            result++;
        }
        else if(pessoas[ptr1] - k > aps[ptr2]){
            ptr2++;
        }
        else{
            ptr1++;
        }
    }
    cout << result << endl;
    return 0;
}