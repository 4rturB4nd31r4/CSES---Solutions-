#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n, target;
    cin >> n >> target;
    vector<vector<long long>> vec;
    for(long long i = 0 ; i < n ; i++){
        int v;
        cin >> v;
        vec.push_back({v, i+1});
    }
    sort(vec.begin(), vec.end());
    long long ptr1 = 0, ptr2 = n-1;
    while(ptr2 > ptr1){
        if(vec[ptr1][0] + vec[ptr2][0] > target) ptr2--;
        else if(vec[ptr1][0] + vec[ptr2][0] < target) ptr1++;
        else{
            cout << vec[ptr1][1] << " " << vec[ptr2][1] << endl;
            return 0;
        }
    }
    cout << "IMPOSSIBLE" << endl;
    return 0;
}
