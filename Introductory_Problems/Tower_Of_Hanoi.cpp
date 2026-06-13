#include <bits/stdc++.h>

using namespace std;

vector<string> moves;

void solve (int qntDisks, int origin, int destiny){
    if(qntDisks == 0) return;
    int freeStack = 6 - origin - destiny;
    solve(qntDisks-1, origin, freeStack);
    moves.push_back(to_string(origin) + " " + to_string(destiny));
    solve(qntDisks-1, freeStack, destiny);
}

int main(){
    int n;
    cin >> n;
    solve(n, 1, 3);
    cout << moves.size() << endl;
    for(string s : moves) cout << s << endl;
    return 0;
}