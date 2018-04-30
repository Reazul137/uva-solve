#include <bits/stdc++.h>

using namespace std;
int a[12];
int main()
{
    int n;
    char s[50];
    while(scanf("%d",&n) && n){
        getchar();
        gets(s);
        if(strcmp(s,"too high") == 0){
            for(int i = n; i <= 10; i++){
                a[i] = -1;
            }
        }
        else if(strcmp(s,"too low") == 0){
            for(int i = n; i >= 1; i--){
                a[i] = -1;
            }
        }
        else{
            if(a[n] == 0){
                printf("Stan may be honest\n");
            }
            else{
                printf("Stan is dishonest\n");
            }
            for(int i = 0; i <= 10; i++){
                a[i] = 0;
            }

        }
    }
    return 0;
}


