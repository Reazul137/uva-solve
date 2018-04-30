#include <stdio.h>

int main()
{
    int i,j,len1,len2;
    unsigned long long int a,b;
    char ara1[10000],ara2[10000],ara[10000];
    while(scanf("%llu %llu",&a,&b)!= EOF){
        if(a == 0 && b == 0) break;
        i=0;
        while(a > 0){
            ara1[i] = a % 10;
            a = a / 10;
            i++;
        }
        printf("%d\n",ara1);
        i=0;
        while(b > 0){
            ara2[i] = b % 10;
            b = b / 10;
            i++;
        }
        printf("%d\n",ara2);
        len1 = strlen(ara1);
        len2 = strlen(ara2);
        int carry = 0;
        if(len1> len2){
            for(i=len1-1;i>=0;i++){
                ara[0] = ara1[i] + ara2[i];
                if(ara[0]%10 != 0) carry++;
            }
        }
        else {
            for(i=len2-1;i>=0;i++){
                ara[0] = ara1[i] + ara2[i];
                if(ara[0]%10 != 0) carry++;
            }
        }
        if( carry > 0){
            printf("%d carry operations.\n",carry);
        }
        else if ( carry == 0){
            printf("No carry operation.\n");
        }
    }

    return 0;
}
