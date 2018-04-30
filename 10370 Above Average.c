#include <stdio.h>

int main(){
    int i,j,k,T,N,ara[10000];
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        int total = 0;
        scanf("%d",&N);
        for(j=1;j<=N;j++){
            scanf("%d",&ara[j]);
            total = total + ara[j];
        }
        float avg = total / N;
        int count = 0;
        for(k=1;k<=N;k++){
            if(ara[k] > avg){
                count++;
            }
        }

        float total_students_a_a = (float) (100*count)/ (float) (N);
        printf("%.3f%%\n",total_students_a_a);
    }
    return 0;
}
