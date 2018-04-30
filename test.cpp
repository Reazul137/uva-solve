#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int arr[200000];
void selection(int n);
int main()
{
    int i,n;
    FILE *fp;
    fp=fopen("input.txt","r");
    fscanf(fp,"%d",&n);
    for(i=0; i<n; i++)
        fscanf(fp,"%d",&arr[i]);
    time_t start,end;
    double d;
    start=clock();
    for(i=0; i<n; i++)
        selection(n);
    end=clock();
    printf("%d",end-start);
    return 0;
}
void selection(int n)
{
    int i,j,min,tmp;
    for(i=0; i<=n-2; i++)
    {
        min=i;
        for(j=i+1; j<=n-1; j++)
        {
            if(arr[min]<arr[j])
                min=j;
        }
        tmp=arr[min];
        arr[min]=arr[i];
        arr[i]=tmp;
    }
}


