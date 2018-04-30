#include <stdio.h>
int main()
{
    int n, i, j,k,flag;

    while (scanf("%d", &n)==1)
    {   if(n==0)
            break;
        flag=0;
        for(i=1; i<60; i++)
        {
            for(j=0; j<=i; j++)
            {
                if(n==(i*i*i-j*j*j))
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1)
            break;
        }
       if(flag==1) printf("%d %d\n",i, j);
       else
        printf("No solution\n");
    }
}
