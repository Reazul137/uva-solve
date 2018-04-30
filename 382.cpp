#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    printf("PERFECTION OUTPUT\n");
    while(cin>>n){
        if(n == 0){
            printf("END OF OUTPUT\n");
            break;
        }
        //cout<<n<<endl;
        int N = n/2;
        int sum = 0;
        for(int i=1;i<=N; i++){
            if(n%i==0){
                sum += i;
            }
        }
        //cout<<sum<<endl;
        if(sum == n){
            printf("%5d  PERFECT\n",n);
        }
        else if(sum<n){
            printf("%5d  DEFICIENT\n",n);
        }
        else{
            printf("%5d  ABUNDANT\n",n);
        }
    }
    return 0;
}

