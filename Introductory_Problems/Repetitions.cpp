#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    long long l = 1, max_l = 1;
    for(int i = 1; i < s.length() ; i++){
        if(s.at(i) == s.at(i-1)) l++;
        else{
            if(l > max_l) max_l = l;
            l = 1;
        }
    }
    if(l > max_l) max_l = l;
    cout  << max_l << endl;
    return 0;
}