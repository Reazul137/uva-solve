#include <stdio.h>
#include <string.h>

int main()
{
    char lan[1000];
    int flag = 0;
    while(scanf("%s",lan)!=EOF){
        flag++;
        if(strcmp(lan,"#")==0) break;
        else if(strcmp(lan,"HELLO")==0){
            printf("Case %d: ENGLISH\n",flag);
        }
        else if(strcmp(lan,"HOLA")==0){
            printf("Case %d: SPANISH\n",flag);
        }
        else if(strcmp(lan,"HALLO")==0){
            printf("Case %d: GERMAN\n",flag);
        }
        else if(strcmp(lan,"BONJOUR")==0){
            printf("Case %d: FRENCH\n",flag);
        }
        else if(strcmp(lan,"CIAO")==0){
            printf("Case %d: ITALIAN\n",flag);
        }
        else if(strcmp(lan,"ZDRAVSTVUJTE")==0){
            printf("Case %d: RUSSIAN\n",flag);
        }
        else{
            printf("Case %d: UNKNOWN\n",flag);
        }

    }
    return 0;
}

