#include <bits/stdc++.h>

using namespace std;

unordered_map<char, int> qnt;

string actual;
string s;
vector<string> res;
string letters;

void solve (char letter){
    actual.push_back(letter);
    qnt[letter]--;
    if(actual.length() == s.length()){
        res.push_back(actual);
        return;
    }
    for(char c: letters){
        if(!qnt[c]) continue;
        solve(c);
        actual.pop_back();
        qnt[c]++;
    }
}

int main(){
    cin >> s;
    for(auto c: s) qnt[c]++;
    for(auto& it : qnt) letters.push_back(it.first);
    sort(letters.begin(), letters.end());
    for(char c : letters){
        solve(c);
        actual.pop_back();
        qnt[c]++;
    }
    cout << res.size() << endl;
    for(string s : res) cout << s << endl;
    return 0;
}