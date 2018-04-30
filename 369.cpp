#include <bits/stdc++.h>
using namespace std;
long double factorial(long double x){
    long double r = 1;
    for(long double i = 2; i <= x; i++)
    {
        r *= i;
    }
    return r;
}

int main(){
    long double n, m, res, r;
    while(cin>>n>>m){
        if(n == 0 && m == 0)  break;
        r = (factorial(n)) / (factorial(n-m)*factorial(m));
        cout << n << " things taken " << m << " at a time is " << fixed << setprecision(0) << r << " exactly." << endl;
    }
    return 0;
}


