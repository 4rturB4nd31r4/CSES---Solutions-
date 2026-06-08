#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> vecSup;
    vector<vector<int>> vec(n, vector<int>(n, 0));
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            vecSup.clear();
            int minimum = i + j;
            for(int line = 0 ; line < i ; line++){
                vecSup.push_back(vec[line][j]);
            }
            for(int column = 0 ; column < j ; column++){
                vecSup.push_back(vec[i][column]);
            }
            sort(vecSup.begin(), vecSup.end());
            for(int l = 0 ; l < i + j ; l++){
                if(l < vecSup[l]){
                    minimum = l;
                    break;
                }
            }
            vec[i][j] = minimum;
        }
    }
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}