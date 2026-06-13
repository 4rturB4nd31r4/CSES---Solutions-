#include <bits/stdc++.h>

using namespace std;

int n;

vector<pair<int,int>> adjacence (int i, int j){
    vector<pair<int,int>> vec;
    if(i - 1 >= 0 && j - 2 >= 0)   vec.push_back({i-1, j-2});
    if(i + 1 <= n-1 && j - 2 >= 0) vec.push_back({i+1, j-2});
    if(i + 2 <= n-1 && j - 1 >= 0) vec.push_back({i+2, j-1});
    if(i + 2 <= n-1 && j + 1 <= n-1) vec.push_back({i+2, j+1});
    if(i + 1 <= n-1 && j + 2 <= n-1) vec.push_back({i+1, j+2});
    if(i - 1 >= 0 && j + 2 <= n-1) vec.push_back({i-1, j+2});
    if(i - 2 >= 0 && j - 1 >= 0) vec.push_back({i-2, j-1});
    if(i - 2 >= 0 && j + 1 <= n-1) vec.push_back({i-2, j+1});
    return vec;
}

int main(){
    cin >> n;
    vector<vector<int>> table(n, vector<int>(n, -1));
    table[0][0] = 0;
    queue<pair<int,int>> q;
    q.push({0,0});
    while(!q.empty()){
        pair<int,int> p = q.front();
        q.pop();
        for(auto viz : adjacence(p.first, p.second)){
            if(table[viz.first][viz.second] >= 0) continue;
            table[viz.first][viz.second] = table[p.first][p.second] + 1;
            q.push(viz);
        }
    }
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cout << table[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}