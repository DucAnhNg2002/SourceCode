#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll A,B,V;
    cin >> A >> B >> V;
    // chưa k�?p tu�?t mất bò �?c A
    V -= A;
    double day = V*1.0/(A-B);
    if(day == (ll)(day) ) cout << day +1 ;
    else cout << (ll)(day+2);
} 
