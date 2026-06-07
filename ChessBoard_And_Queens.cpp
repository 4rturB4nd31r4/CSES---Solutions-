#include <bits/stdc++.h>

using namespace std;

vector<string> table(8);

int qnt = 0;

bool checkSquare (int row, int column){
    if(table[row][column] == '*') return false;
    for(int rowRow = 0 ; rowRow < 8 ; rowRow++){
        if(table[rowRow][column] == 'q') return false;
    }
    for(int columnColumn = 0; columnColumn < 8 ; columnColumn++){
        if(table[row][columnColumn] == 'q') return false;
    }
    int rowR = row, columnC = column;
    while(columnC < 8  && rowR < 8){
        if(table[rowR][columnC] == 'q') return false;
        columnC++;
        rowR++;
    }
    rowR = row;
    columnC = column;
    while(columnC < 8 && rowR >= 0){
        if(table[rowR][columnC] == 'q') return false;
        rowR--;
        columnC++;
    }
    rowR = row;
    columnC = column;
    while(columnC >=0 && rowR >= 0){
        if(table[rowR][columnC] == 'q') return false;
        rowR--;
        columnC--;
    }
    rowR = row;
    columnC = column;
    while(columnC >= 0 && rowR < 8){
        if(table[rowR][columnC] == 'q') return false;
        rowR++;
        columnC--;
    }
    return true;
}

void solve(int row){
    if(row == 8){
        qnt++;
        return;
    }
    for(int i = 0 ; i < 8 ; i++){
        if(!checkSquare(row, i)) continue;
        table[row][i] = 'q';
        solve(row+1);
        table[row][i] = '.';
    }
}

int main(){
    for(int i = 0 ; i < 8 ; i++) cin >> table[i];
    solve(0);
    cout << qnt << endl;
    return 0;
}