#include <bits/stdc++.h>

using namespace std;


int main(){
    int n;
    cin >> n;
    vector<vector<string>> greyCode = {{"0","1"}};;
    for(int k = 2 ; k <= n ; k++){
        vector<string> v;
        for(int i = greyCode[greyCode.size()-1].size() - 1 ; i >= 0 ; i--){
            v.push_back(greyCode[greyCode.size()-1][i] + "1");
        }
        for(int i = 0 ; i < greyCode[greyCode.size()-1].size() ; i++){
            v.push_back(greyCode[greyCode.size()-1][i] + "0");
        }
        greyCode.push_back(v);
    }
    for(string s : greyCode[n-1]) cout << s << endl;
    return 0;
}