#include <bits/stdc++.h>

using namespace std;
int main()
{
    int tc,n,len,num,sub;
    scanf("%d",&tc);
    for(int i = 0; i < tc; i++){
        scanf("%d%d",&len,&n);
        int low = 0, high = 0;
        for(int j = 0; j < n; j++){
            scanf("%d",&num);
            sub = len - num;
            if(sub>=num)
            {
                if(high<sub)
                {
                    high=sub;
                }
                if(low<num)
                {
                    low=num;
                }
            }
            if(sub<num)
            {
                if(high<num)
                {
                    high=num;
                }
                if(low<sub)
                {
                    low=sub;
                }
            }
        }
        printf("%d %d\n",low,high);
    }
    return 0;
}

