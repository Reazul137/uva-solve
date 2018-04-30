#include <iostream>
#include <cstdio>
#include <string.h>


using namespace std;
int main()
{
    int i,len;
    char a;
    long int count_down=1;
    while(scanf("%c",&a)!=EOF){
            if(a == 34 && count_down%2==1){
                printf("%c%c",96,96);
                count_down++;
            }
            else if(a == 34 && count_down%2==0){
                printf("%c%c",39,39);
                count_down++;
            }
            else{
                printf("%c",a);
            }
        }
    return 0;
}

