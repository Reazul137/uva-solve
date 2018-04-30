#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <locale>

using namespace std;
int main()
{
    char a[1000000];
    long int mod4, mod100, mod400, mod15, mod55, lp, flag,len;
    int print = 0;
    while(gets(a)){
        len = strlen(a);
        mod4 = 0, mod100 = 0, mod400 = 0, mod15 = 0, mod55 = 0, lp = 0, flag = 0;
        for(int i=0; i<len; i++){
            mod4 = ((mod4*10) + (a[i]-'0'))%4;
            mod100 = ((mod100*10) + (a[i]-'0'))%100;
            mod400 = ((mod400*10) + (a[i]-'0'))%400;
            mod15 = ((mod15*10) + (a[i]-'0'))%15;
            mod55 = ((mod55*10) + (a[i]-'0'))%55;
        }
        if((mod4==0&&mod100!=0)||mod400 == 0){
            cout<<"This is leap year."<<endl;
            lp = 1;
            flag = 1;
        }
        if(mod15==0){
            cout<<"This is huluculu festival year."<<endl;
            flag = 1;
        }
        if(mod55==0 && lp==1){
            cout<<"This is bulukulu festival year."<<endl;
        }
        if(flag==0){
            cout<<"This is an ordinary year."<<endl;
        }
        if ( print != 0 ){
            cout<<endl;
        }
        print = 1;
    }
    return 0;
}

