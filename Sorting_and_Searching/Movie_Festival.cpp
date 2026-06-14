#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<vector<int>> movies;
    for(int i = 0 ; i < n ; i++){
        int start, end;
        cin >> start >> end;
        movies.push_back({end, start});
    }
   sort(movies.begin(), movies.end());
   int ptr = 0, qnt = 0;
   for(int i = 0 ; i < n ; i++){
    if(movies[i][1] >= ptr){
        qnt++;
        ptr = movies[i][0];
    }
   }
   cout << qnt << endl;
    return 0;
}