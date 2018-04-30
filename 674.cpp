#include<bits/stdc++.h>
#define ll long long
using namespace std;
int cost[6],ara[8000][6],vis[8000][6];
int dp(int taka, int index)
{
    int x,y;

    if(taka<0)return 0;

    if(index>5)
    {
        if(taka==0)return 1;
        else return 0;
    }
    if(taka==0)return 1;
    if(vis[taka][index]!=-1)return ara[taka][index];

    x=dp(taka-cost[index],index);
    y=dp(taka,index+1);
    ara[taka][index]=x+y;
    vis[taka][index]++;
    return ara[taka][index];
}
int main()
{
    int i,j,k,l,n,m,taka,res;
    cost[1]=1;
    cost[2]=5;
    cost[3]=10;
    cost[4]=25;
    cost[5]=50;
    memset(vis,-1,sizeof vis);
    while(scanf("%d",&taka)!=EOF)
    {
        //taka=(taka/5)*5;
        //cout<<taka<<endl;
        //memset(ara,0,sizeof ara);
        res=dp(taka,1);
        printf("%d\n",res);
    }


    return 0;
}
