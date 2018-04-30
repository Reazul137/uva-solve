#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;
int main()
{
    double h,u,d,f;
    while(cin>>h>>u>>d>>f){
        if(h==0) break;
        int day = 0 ;
        double start = 0.0, path = 0.0;
        double fat = u*f*0.01;
        while(1){
            day++;
            if(u>0){
                path += u;
                u -= fat;
            }

            if(path>h){
                printf("success on day %d\n",day);
                break;
            }
            path -= d;
            if(path<0){
                printf("failure on day %d\n",day);
                break;
            }
        }
    }
    return 0;
}



