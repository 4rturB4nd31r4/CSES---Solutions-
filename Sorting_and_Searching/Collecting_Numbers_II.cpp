#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n, t;
    cin >> n >> t;
    vector<long long> vec(n+2);
    for(long long i = 1 ; i <= n ; i++) cin >> vec[i];
    vector<long long> sup(n+2);
    sup[n+1] = n+1; 
    vector<long long> inflections(n+2);
    for(long long i = 1 ; i <= n ; i++) sup[vec[i]] = i;
    long long qnt = 1;
    for(long long i = 1 ; i <= n ; i++){
        if(sup[i] < sup[i-1]){
            qnt++;
            inflections[i] = 1;
        } 
    }
    for(long long i = 0 ; i < t ; i++){
        long long p1, p2;
        cin >> p1 >> p2;
        long long nSup = vec[p1];
        vec[p1] = vec[p2];
        vec[p2] = nSup;
        sup[vec[p1]] = p1;
        sup[vec[p2]] = p2;
        if((sup[vec[p1]] < sup[vec[p1]-1]) && !inflections[vec[p1]]){
            qnt++;
            inflections[vec[p1]] = 1;
        }
        if((sup[vec[p1]] > sup[vec[p1]-1]) && inflections[vec[p1]]){
            qnt--;
            inflections[vec[p1]] = 0;
        }
        if((sup[vec[p1]+1] < sup[vec[p1]]) && !inflections[vec[p1]+1]){
            qnt++;
            inflections[vec[p1]+1] = 1;
        }
        if((sup[vec[p1]+1] > sup[vec[p1]]) && inflections[vec[p1]+1]){
            qnt--;
            inflections[vec[p1]+1] = 0;
        }
        if((sup[vec[p2]] < sup[vec[p2]-1]) && !inflections[vec[p2]]){
            qnt++;
            inflections[vec[p2]] = 1;
        }
        if((sup[vec[p2]] > sup[vec[p2]-1]) && inflections[vec[p2]]){
            qnt--;
            inflections[vec[p2]] = 0;
        }
        if((sup[vec[p2]+1] < sup[vec[p2]]) && !inflections[vec[p2]+1]){
            qnt++;
            inflections[vec[p2]+1] = 1;
        }
        if((sup[vec[p2]+1] > sup[vec[p2]]) && inflections[vec[p2]+1]){
            qnt--;
            inflections[vec[p2]+1] = 0;
        }
        cout << qnt << endl;
    }
    return 0;
}