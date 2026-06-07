#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    unordered_map <char , int> map;
    for(int i = 0; i < s.length() ; i++){
        map[s.at(i)]++;
    }
    deque <char> dq;
    int qnt_odd = 0;
    char odd;
    for(auto& it : map){
        if(it.second % 2){
            qnt_odd++;
            odd = it.first;
        }
    }
    if(qnt_odd > 1){
        cout << "NO SOLUTION" << endl;
        return 0;
    }
    else if(qnt_odd == 1){
        map[odd]--;
        dq.push_back(odd);
    }
    for(auto& it : map){
        while(it.second > 0){
            dq.push_back(it.first);
            dq.push_front(it.first);
            it.second -= 2;
        }
    }
    for(auto c : dq) cout << c;
    cout << endl;
}