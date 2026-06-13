#include <bits/stdc++.h>

using namespace std;

int main(){
    string s, ans = "";
    int pointer = 0;
    cin >> s;
    multiset<char> ms;
    for(auto c : s) ms.insert(c);
    sort(s.begin(), s.end());
    while(!ms.empty()){
        if(ans.length() % 2 == 0){
            ans.push_back(*ms.begin());
            ms.erase(ms.begin());
        }
        else{
            auto it = ms.upper_bound(ans[ans.length()-1]);
            if(it != ms.end()){
                ans.push_back(*it);
                ms.erase(it);
            }
            else if(ans.length() == s.length()-1){
                ans.push_back(ans[ans.length()-1]);
            } 
            else{
                cout << -1 << endl;
                return 0;
            }
        }
    }
    cout << ans << endl;
}