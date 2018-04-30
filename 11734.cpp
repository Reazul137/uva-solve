#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    char sub[100],jud[100],c,sub_space[100],jud_space[100];
    scanf("%d",&t);
    scanf("%c",&c);
    for(int i = 1; i <= t; i++){
        gets(sub);
        gets(jud);
        if(strcmp(sub,jud) == 0 ){
            printf("Case %d: Yes\n",i);
        }
        else{
            int ls = strlen(sub);
            int lj = strlen(jud);
            int k;
            k = 0;
            for(int j = 0; j < ls; j++){
                if(sub[j] != ' '){
                    sub_space[k] = sub[j];
                    k++;
                }

            }
            sub_space[k] = '\0';
            k = 0;
            for(int j = 0; j < lj; j++){
                if(jud[j] != ' '){
                    jud_space[k] = jud[j];
                    k++;
                }
            }
            jud_space[k] = '\0';
            if(strcmp(sub_space,jud_space) == 0){
                printf("Case %d: Output Format Error\n",i);
            }
            else{
                printf("Case %d: Wrong Answer\n",i);
            }

        }
    }
    return 0;
}
