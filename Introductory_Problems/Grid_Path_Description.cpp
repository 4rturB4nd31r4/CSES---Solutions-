#include <bits/stdc++.h>

using namespace std;

string s;
int solutions = 0;
int R=0,L=0,D=0,U=0;
bool grid[9][9];

void solve(int pos, int lastRowLocal, int lastColLocal){
    if(grid[lastRowLocal][lastColLocal]) return;
    if(lastRowLocal == 7 && lastColLocal == 1){
        if(pos == 48) solutions++;
        else return;
    }
    if(pos == 48) return;
    if(grid[lastRowLocal][lastColLocal-1] && grid[lastRowLocal][lastColLocal+1] && !grid[lastRowLocal-1][lastColLocal] && !grid[lastRowLocal+1][lastColLocal]) return;
    if(grid[lastRowLocal-1][lastColLocal] && grid[lastRowLocal+1][lastColLocal] && !grid[lastRowLocal][lastColLocal-1] && !grid[lastRowLocal][lastColLocal+1]) return;
    grid[lastRowLocal][lastColLocal] = 1;
    if(s[pos] == '?'){
        U++;
        if(!grid[lastRowLocal-1][lastColLocal] && U <= 21) solve(pos+1, lastRowLocal-1, lastColLocal);
        U--;
        D++;
        if(!grid[lastRowLocal+1][lastColLocal] && D <= 27) solve(pos+1, lastRowLocal+1, lastColLocal);
        D--;
        R++;
        if(!grid[lastRowLocal][lastColLocal+1] && R <= 27) solve(pos+1, lastRowLocal, lastColLocal+1);
        R--;
        L++;
        if(!grid[lastRowLocal][lastColLocal-1] && L <= 21) solve(pos+1, lastRowLocal, lastColLocal-1);
        L--;
    }
    else{
        if(s[pos] == 'U' && !grid[lastRowLocal-1][lastColLocal] && U <= 20){
            U++;
            solve(pos+1, lastRowLocal-1, lastColLocal);
            U--;
        }
        if(s[pos] == 'D' && !grid[lastRowLocal+1][lastColLocal] && D <= 26){
            D++;
            solve(pos+1, lastRowLocal+1, lastColLocal);
            D--;
        }
        if(s[pos] == 'L' && !grid[lastRowLocal][lastColLocal-1] && L <= 20){
            L++;
            solve(pos+1, lastRowLocal, lastColLocal-1);
            L--;
        }
        if(s[pos] == 'R' && !grid[lastRowLocal][lastColLocal+1] && R <= 26){
            R++;
            solve(pos+1, lastRowLocal, lastColLocal+1);
            R--;
        }
    }
    grid[lastRowLocal][lastColLocal] = 0;
}

int main(){
    cin >> s;
    for(int i = 0; i < 9; i++){
        grid[0][i] = 1;
        grid[8][i] = 1;
        grid[i][0] = 1;
        grid[i][8] = 1;
    }
    solve(0, 1, 1);
    cout << solutions << endl;
}