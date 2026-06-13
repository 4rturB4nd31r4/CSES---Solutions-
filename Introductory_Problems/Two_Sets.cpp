#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n, s1 = 0, s2 = 0;
    cin >> n;
    vector<int> v1,v2;
    for(int i = n ; i > 0 ; i--){
        if(s1 <= s2){
            s1 += i;
            v1.push_back(i);
        }
        else{
            s2 += i;
            v2.push_back(i);
        }
    }
    if(s1 == s2){
        cout << "YES" << endl;
        cout  << v1.size() << endl;
        for(int n : v1) cout << n << " ";
        cout << endl << v2.size() << endl;
        for(int n : v2) cout << n << " ";
        cout << endl;
    }
    else cout << "NO" << endl;
    return 0;
}