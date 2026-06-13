#include <bits/stdc++.h>

using namespace std;

vector<long long> qnts = {0};
vector<long long> power10 = {1};

long long binSearch(long long obj){
    int p1 = 0, p2 = qnts.size() - 1;
    while(p2 - p1 != 1){
        if(obj > qnts[(p1+p2)/2]) p1 = (p1+p2)/2;
        else p2 = (p1+p2)/2;
    }
    return p1;
}

int main(){
    int q;
    cin >> q;
    long long s = 0;
    long long pow10 = 10;
    while(s < 1000000000000000000LL){
        s = qnts.size() * pow10 + ((1-pow10)/9);
        qnts.push_back(s);
        power10.push_back(pow10);
        pow10 *= 10;
    }
    for(int i = 0; i < q ; i++){
        long long t;
        cin >> t;
        long long qntDigits = binSearch(t) + 1;
        long long number = ((t - qnts[qntDigits-1])/qntDigits) + 1;
        long long rem;
        if((t - qnts[qntDigits-1]) % qntDigits == 0){
            number--;
            rem = qntDigits;
        }
        else{
            rem = (t - qnts[qntDigits-1]) % qntDigits;
        }
        long long digit = qntDigits - rem;
        if(qntDigits != 1) number--;
        long long result = (number / power10[digit]) % 10;
        if(rem == 1 && qntDigits != 1) result++;
        cout << result << endl;
    }
}