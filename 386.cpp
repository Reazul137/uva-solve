#include <bits/stdc++.h>

using namespace std;
int cube(int n)
{
    return n*n*n;
}
int main()
{
    int a,b,c,d;
    for(int i = 6; i <= 200; i++){
        a = cube(i);
        for(int j = 2; j <= 200; j++){
            b = cube(j);
            for(int k = j + 1; k <= 200; k++){
                c = cube(k);
                for(int l = k + 1; l <= 200; l++){
                    d = cube(l);
                    if(a == b + c + d){
                        printf("Cube = %d, Triple = (%d,%d,%d)\n",i,j,k,l);
                    }
                }
            }
        }
    }

    return 0;
}


