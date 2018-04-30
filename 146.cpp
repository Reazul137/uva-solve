#include <bits/stdc++.h>

using namespace std;
int main()
{
    char sen[2000];
    while(gets(sen)){
        if(sen[0] == '#') break;
        int l = strlen(sen);
        if(next_permutation(sen,sen+l)){
            puts(sen);
        }
        else{
            printf("No Successor\n");
        }
    }
    return 0;
}


