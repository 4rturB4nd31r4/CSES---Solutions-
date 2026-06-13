#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i = 0 ; i < t ; i++){
        long a,b;
        cin >> a >> b;
        if(2*a >= b && 2*b >= a && !((2*a-b)%3) && !((2*b-a)%3)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}