#include <bits/stdc++.h>

using namespace std;
int main()
{
    int tc;
    char c;
    char sen[1000];
    int ara[6];
    scanf("%d",&tc);
    scanf("%c",&c);
    for(int i = 0; i < tc; i++){
        gets(sen);
        memset(ara,0,sizeof ara);
        int l = strlen(sen);
        for(int j = 0; j < l; j++){
            if(sen[j] == 'A'){
                ara[0]++;
            }
            else if(sen[j] == 'R'){
                ara[1]++;
            }
            else if(sen[j] == 'M'){
                ara[2]++;
            }
            else if(sen[j] == 'G'){
                ara[3]++;
            }
            else if(sen[j] == 'I'){
                ara[4]++;
            }
            else if(sen[j] == 'T'){
                ara[5]++;
            }
        }
        ara[0] /= 3;
        ara[1] /= 2;
        sort(ara,ara+6);
        printf("%d\n",ara[0]);
    }
    return 0;
}
