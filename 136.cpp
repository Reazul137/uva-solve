#include <iostream>
#include <cstdio>

using namespace std;
int main()
{
    int i=0,arr[100000];
    int n = 0,a=0;
    for(i=0;i<1500;i++){
        while(n>1){
            while(n%2 != 0){
                n = n % 2;
                n++;
            }
            while(n%3 != 0){
                n = n % 3;
                n++;
            }
            while(n%5 != 0){
                n = n % 5;
                n++;
            }
            ara[i] = n;
        }
    }

    //printf("The 1500'th ugly number is %lld",arr[1499]);
    return 0;
}
