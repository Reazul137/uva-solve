#include <bits/stdc+++.h>

using namespace std;
int main()
{
    int a[10],b[10];
    while(1){
        for(int i = 0; i < 5; i++){
            scanf("%d",&a[i]);
        }
        for(int i = 0; i < 5; i++){
            scanf("%d",&b[i]);
        }
        int fl = 0;
        for(int i = 0; i < 5; i++){
            if(a[i] != b[i]) fl++
        }
        if(fl == 5) printf("Y\n");
        else printf("N\n");

    }
    return 0;
}
