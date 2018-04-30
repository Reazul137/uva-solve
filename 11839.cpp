#include <bits/stdc++.h>

using namespace std;
int a[5];
int main()
{
    int tc;
    while(scanf("%d",&tc)!= EOF){
        if( tc == 0) break;
        for(int j = 0; j < tc; j++){
            int flag  = 0, in = 0;
            for(int i = 0; i < 5; i++){
                scanf("%d",&a[i]);
            }
            for(int i = 0; i < 5; i++){
                if(a[i]<=127){
                    flag++;
                    in = i + 1;
                }
            }
            if(flag == 1){
                if( in == 1){
                    printf("A\n");
                }
                else if( in == 2){
                    printf("B\n");
                }
                else if( in == 3){
                    printf("C\n");
                }
                else if( in == 4){
                    printf("D\n");
                }
                else if( in == 5){
                    printf("E\n");
                }
            }
            else{
                printf("*\n");
            }
        }
    }
}
