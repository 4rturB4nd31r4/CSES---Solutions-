#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i = 0 ; i < t ; i++){
        int n , a , b;
        cin >> n >> a >> b;
        vector<int> vec1, vec2;
        int ties = n - a - b;
        if(ties < 0 || (a*b == 0 && a+b > 0)){
            cout << "NO" << endl;
            continue;
        }
        for(int i = 1 ; i <= ties ; i++){
            vec1.push_back(i);
            vec2.push_back(i);
        }
        for(int i = n ; i >= n - a + 1 ; i--){
            vec1.push_back(i);
            vec2.push_back(i - b);
        }
        for(int i = n ; i >= n - b + 1 ; i--){
            vec2.push_back(i);
            vec1.push_back(i - a);
        }
        cout << "YES" << endl;
        for(int i = 0 ; i < vec1.size(); i++){
            cout << vec1[i] << " ";
        }
        cout << endl;
        for(int i = 0 ; i < vec2.size(); i++){
            cout << vec2[i] << " ";
        }
        cout << endl;
    }
    return 0;
}