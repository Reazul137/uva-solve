#include <stdio.h>
#include <string.h>

int main()
{
    char a[100010];
    int A,T,i;
    scanf("%d",&T);
    for(i=1; i<=T; i++)
    {
        scanf("%s",a);
        A = strlen(a);
        if( A == 3)
        {
            if(a[0] == 'o'|| a[0] == 'n')
            {
                printf("1\n");
            }
            else if(a[0] == 'n'|| a[0] == 'o')
            {
                printf("1\n");
            }
            else if(a[0] == 'n'|| a[0] == 'e')
            {
                printf("1\n");
            }
            else if(a[0] == 'e'|| a[0] == 'n')
            {
                printf("1\n");
            }
            else
            {
                printf("2\n");
            }
        }
        else if( A == 5) printf("3\n");
    }
    return 0;
}

