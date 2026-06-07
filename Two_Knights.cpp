#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    long long qnt_canto = 2, qnt_lado_do_canto = 3, qnt_borda = 4, qnt_diagonal_do_canto = 4, qnt_borda_secundaria = 6, qnt_meio = 8;
    for(int i = 1 ; i <= n ; i++){
        if(i == 1) cout << 0 << endl;
        else if (i == 2) cout << 6 << endl;
        else if (i == 3) cout << 28 << endl;
        else {
            long long canto = 4, lado_do_canto = 8, borda = 4 * (i-4), diagonal_do_canto = 4, borda_secundária = 4 * (i-4), meio = (i-4)*(i-4);
            cout << (canto*(i*i - qnt_canto - 1) + lado_do_canto*(i*i - qnt_lado_do_canto - 1) + borda*(i*i - qnt_borda - 1) + diagonal_do_canto*(i*i - qnt_diagonal_do_canto - 1) + borda_secundária*(i*i - qnt_borda_secundaria - 1) + meio*(i*i - qnt_meio - 1))/2 << endl;
        }
    }
    return 0;
}