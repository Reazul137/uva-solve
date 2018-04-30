#include <bits/stdc++.h>

using namespace std;
int main()
{
    char sen[250], pro[250],letter[26],freq[26];
    int tc;
    char c;
    for(int p = 0; p < 26; p++){
        letter[p] = 97 + p;
    }
    scanf("%d",&tc);
    scanf("%c",&c);
    for(int t = 0; t < tc; t++){
    gets(sen);
    int l = strlen(sen);
    int j  = 0;
    memset(freq, 0, sizeof freq);
    for(int i = 0; i < l; i++){
        if(isalpha(sen[i])){
            if(isupper(sen[i])){
                sen[i] += 32;
                pro[j] = sen[i];
                j++;
            }
            else{
                pro[j] = sen[i];
                j++;
            }
        }
    }
    int maxi = 0;
    for(int i = 0; i < j; i++){
        for(int a = 0; a < 26; a++){
            if(pro[i] == letter[a]){
                freq[a]++;
            }
            if(freq[a] > maxi){
                maxi = freq[a];
            }
        }
    }
    for(int i = 0; i < 26; i++){
        if(freq[i] == maxi){
            printf("%c",letter[i]);
        }
    }
    printf("\n");
}
    return 0;
}
