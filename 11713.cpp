#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;
int main()
{
    int i,T,j;
    char a[1000],b[1000];
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        scanf("%s",&a);
        scanf("%s",&b);
        int pass = 0;
        int len1 = strlen(a);
        int len2 = strlen(b);
        if(len1 != len2){
            printf("No\n");
            continue;
        }
        else if(strcmp(a,b)==0){
            printf("Yes\n");
            continue;
        }
        else if (len1 = len2){
            for(j=0;j<len1;j++){
                if(a[j]==b[j]){
                    pass++;
                }
                else if(a[j]!=b[j]){
                    if(a[j]=='a'||a[j]=='e'||a[j]=='i'||a[j]=='o'||a[j]=='u'){
                        if(b[j]=='a'||b[j]=='e'||b[j]=='i'||b[j]=='o'||b[j]=='u'){
                            pass++;
                        }
                    }
                    else{
                        printf("No\n");
                        break;
                    }
                }
            }
            if(pass==len1){
                printf("Yes\n");
            }
        }

    }
    return 0;
}
