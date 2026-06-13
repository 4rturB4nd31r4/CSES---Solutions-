#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    long long x,y;
    for(int i = 0 ; i < n ; i++){
        cin >> x >> y;
        if (y <= x){
            long long qnt = 1 + x*(x-1);
            if(x%2){
                cout << qnt - x + y << endl;
            }
            else{
                cout << qnt - y + x << endl;
            }
        }
        else{
         long long qnt = 1 + y*(y-1);
            if(y%2){
                cout << qnt + y - x << endl;
            }
            else{
                cout << qnt + x - y << endl;
            }
        }   
    }
    return 0;
}