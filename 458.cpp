#include <bits/stdc++.h>

using namespace std;
int main()
{
    char sen[2000];
    while(gets(sen)){
        int l = strlen(sen);
        for(int i = 0; i < l; i++){
            printf("%c",sen[i]-7);
        }
        printf("\n");
    }
    return 0;
}

