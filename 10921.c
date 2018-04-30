#include <stdio.h>
#include <string.h>

int main()
{
    char c[100];
    int i;
    while(gets(c)){
        for(i=0;i<strlen(c);i++){
            if(c[i] >= 'A' && c[i] <= 'C') {
                c[i]=2;
                printf("%d",c[i]);
            }
            else if(c[i] >= 'D' && c[i] <= 'F'){
                c[i]=3;
                printf("%d",c[i]);
            }
            else if(c[i] >= 'G' && c[i] <= 'I'){
                c[i]=4;
                printf("%d",c[i]);
            }
            else if(c[i] >= 'J' && c[i] <= 'L'){
                c[i]=5;
                printf("%d",c[i]);
            }
            else if(c[i] >= 'M' && c[i] <= 'O'){
                c[i]=6;
                printf("%d",c[i]);
            }
            else if(c[i] >= 'P' && c[i] <= 'S'){
                c[i]=7;
                printf("%d",c[i]);
            }
            else if(c[i] >= 'T' && c[i] <= 'V'){
                c[i]=8;
                printf("%d",c[i]);
            }
            else if(c[i] >= 'W' && c[i] <= 'Z'){
                c[i]=9;
                printf("%d",c[i]);
            }
            else{
                printf("%c",c[i]);
            }
        }
        printf("\n");

    }
    return 0;
}
