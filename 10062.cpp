#include <bits/stdc++.h>

using namespace std;
int freq[100];
int main()
{
    char sen[2000];
    int asci[100];
    for(int i = 33 ; i <= 126; i++){
        asci[i] = i;
    }

    while(gets(sen)){
        memset(freq, 0 , sizeof freq);
        int l = strlen(sen);
        cout<<l<<endl;
        sort(sen,sen+l);
        for(int j = 0; j < l; j++){
            for(int k = 33; k <= 126; k++){
                if(sen[j] == asci[k]){
                    freq[k]++;
                }
            }
        }
        for(int j = 127; j >= 33; j--){
            if(freq[j] > 0){
                printf("%d %d\n",asci[j],freq[j]);
            }
        }

    }
    return 0;
}
