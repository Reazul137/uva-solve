#include <bits/stdc++.h>

using namespace std;
int main()
{
    int tc,l;
    char c,s[100];
    scanf("%d%c",&tc,&c);
    for(int i = 0; i < tc; i++){
        while(gets(s) != '\0'){
            l = strlen(s);
//            cout<<l<<endl;
            if(l == 0) break;
            for(int j = 0; j < l; j++){
                if(s[j] == '4'){
                    printf("A");
                }
                else if(s[j] == '8'){
                    printf("B");
                }
                else if(s[j] == '3'){
                    printf("E");
                }
                else if(s[j] == '6'){
                    printf("G");
                }
                else if(s[j] == '1'){
                    printf("I");
                }
                else if(s[j] == '0'){
                    printf("O");
                }
                else if(s[j] == '9'){
                    printf("P");
                }
                else if(s[j] == '5'){
                    printf("S");
                }
                else if(s[j] == '7'){
                    printf("T");
                }
                else if(s[j] == '2'){
                    printf("Z");
                }
                else{
                    printf("%c",s[j]);
                }
            }
            printf("\n");
        }
        if(i != tc - 1){
            printf("\n");
        }
    }
}
