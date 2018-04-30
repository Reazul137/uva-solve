#include <bits/stdc++.h>

using namespace std;

//const int NX = 1e5 + 10 ;

int w[100010] , n , m ;

int main()
{
    int t , cs ;
    scanf("%d",&t);
    for( cs = 1 ; cs <= t ; cs++ )
    {
        scanf("%d%d",&n,&m);
        for( int i = 0; i < n ; i++){
            scanf("%d",&w[i]);
        }
        sort( w , w + n );
        int sum = 0 , ans = 0 ;
        for( int i = 0; i < n; i++)
        {
            sum += w[i];
            if( sum > m ) break;
            ans++;
        }
        printf("%d\n",ans);
    }


    return 0;
}
