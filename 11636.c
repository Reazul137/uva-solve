#include<stdio.h>
#include<math.h>
int main()
{
int a,b,i,j=1;
while(scanf("%d",&a)==1 && (a>=0))
{
if(a==1) printf("Case %d: 0\n",j);
for(i=0;i<14;i++)
if(pow(2,i)<a && a<=pow(2,i+1))
printf("Case %d: %d\n",j,i+1);
j++;
}
return 0;
}

#include <stdio.h>

int main()
{
    int N;
    int step = 0,count;
    while(scanf("%d",&N)!=EOF){
        step++;
        count = 0;
        if(N < 1) break;
        while(N>0){
            N = N/2;
            count++;
        }
        printf("Case %d: %d\n",step,count);
    }
    return 0;
}
