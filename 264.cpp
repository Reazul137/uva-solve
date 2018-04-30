#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, value, diagonal, numerator, denominator;
    while(scanf("%d", &n) == 1) {
        value = n;
        for(diagonal = 1; diagonal < value ; diagonal++)
            value -= diagonal;

//        cout<<"diagonal "<<diagonal<<endl;

        if(diagonal % 2){
            numerator = 1 + diagonal - value;
//            cout<<"numerator "<<numerator<<endl;
        }
        else{
            numerator = value;
//            cout<<"numerator else "<<numerator<<endl;
        }

        denominator = diagonal - numerator + 1;
//        cout<<"denominator "<<denominator<<endl;
        printf("TERM %d IS %d/%d\n", n, numerator, denominator);
    }
}
