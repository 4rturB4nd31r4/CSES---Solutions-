#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<vector<int>> vec;
    for(int i = 0 ; i < n ; i++){
        int x;
        cin >> x;
        vec.push_back({x, i});
    }
    sort(vec.begin(), vec.end());
    int qnt = 1;
    for(int i = 1 ; i < n ; i++){
        if(vec[i][1] < vec[i-1][1]) qnt++;
    }
    cout << qnt << endl;
    return 0;
}