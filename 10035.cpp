#include <bits/stdc++.h>

using namespace std;

int a1[10], b1[10];
int main() {
    long long int a,b;
    int c[10];
	while(scanf("%lld%lld",&a,&b)==2){
        if(a == 0 && b == 0) break;
        int flag = 0, sum = 0,car = 0;
        while((a>0)||(b>0)){
            sum = car + (a%10) + (b%10);
            if(sum >= 10){
                flag++;
            }
            car = sum / 10;
            a /= 10;
            b /= 10;
        }
        if(flag == 0)
        {
            printf("No carry operation.\n");
        }
        else if(flag==1){
            printf("1 carry operation.\n");
        }
        else{
            printf("%d carry operations.\n",flag);
        }
    }
//        for(int i = 10; i>=1; i--){
//            a1[i] = a%10;
//            a /= 10;
//        }
//        for(int i = 10; i>=1; i--){
//            b1[i] = b%10;
//            b /= 10;
//        }
//        int flag = 0;
//        for(int i = 10; i>=1; i--){
//            c[i] = a1[i] + b1[i];
//            if(c[i]>9){
//                flag++;
//            }
//        }
	return 0;
}
