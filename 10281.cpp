#include <bits/stdc++.h>

using namespace std;
int main()
{
    char begi[1000];
    int n, time = 0, now;
    int hour, mini, sec, speed=0, newSpeed;
    double distance=0;

    while(cin.getline(begi,1000)){
        n = sscanf(begi,"%d:%d:%d %d",&hour, &mini, &sec, &newSpeed );
        now = hour * 3600 + mini * 60 + sec;
        distance += (now - time) * speed;
        time = now;
        if( n == 3 ) printf("%02d:%02d:%02d %.2lf km\n", hour, mini, sec, distance/3600);
        else if( n == 4) speed = newSpeed;
    }
    return 0;
}
