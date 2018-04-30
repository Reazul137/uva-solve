#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t,n;
    char s[1010][12],sq[12];
    cin>>t;
    for(int i = 1; i <= t; i++){
        cin>>n;
        for(int j = 0; j < n; j++){
            scanf("%s",s[j]);
        }
        scanf("%s",sq);
        printf("Case %d:\n",i);
        for (int j = 0; j < n; j++) {
			int diff = 0;
			for (int k = 0; sq[k] || s[j][k]; k++){
				if(sq[k] != s[j][k]){
                    diff++;
				}
			}
			if (diff <= 1)
				printf("%s\n", s[j]);
		}
    }
    return 0;
}
