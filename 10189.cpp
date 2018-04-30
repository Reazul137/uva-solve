#include <bits/stdc++.h>

using namespace std;

int main ()
{
    char a[110][110];
    int m, n, flag = 0, Case = 0;
    while(cin>>n>>m && n > 0 && m > 0){
        getchar();
        long b[150][150] = {0};
        for(int i = 0; i < n; i++){
            gets(a[i]);
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(a[i][j] == '*'){
                    b[i+1][j]++;
                    b[i+1][j+1]++;
                    b[i][j+1]++;
                    b[i-1][j+1]++;
                    b[i-1][j]++;
                    b[i-1][j-1]++;
                    b[i][j-1]++;
                    b[i+1][j-1]++;
                }
            }
        }
        if(flag == 1) cout<<endl;
        flag = 1;
        printf("Field #%ld:\n", ++Case);
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(a[i][j] == '*'){
                    printf("%c",a[i][j]);
                }
                else{
                    printf("%ld",b[i][j]);
                }
            }
            printf("\n");
        }
    }
    return 0;
}
