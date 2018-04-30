#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc,h,m,a,b,hour,mini;
    char c;
    scanf("%d",&tc);
    for(int i = 0; i < tc; i++){
        scanf("%d%c%d",&h,&c,&m);
        a = h * 60 + m;
        b = 1440 - a;
        hour = b / 60;
        mini = b % 60;
        if( hour > 12) hour -= 12;
        printf("%02d:%02d\n",hour,mini);
    }
    return 0;
}

