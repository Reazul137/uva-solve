#include <bits/stdc++.h>

using namespace std;

bool isVowel(char c)
{
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        return true;
    return false;
}
int main()
{
    char c, cons;
    while(c = getchar()){
        if(c==EOF) return 0;
        if(isVowel(c)){
            while(isalpha(c)){
                cout<<c;
                c = getchar();
            }
            cout<<"ay";
        }
        else if(isalpha(c)){
            cons = c;
            c = getchar();
            while(isalpha(c)){
                cout<<c;
                c = getchar();
            }
            cout<<cons<<"ay";
        }
        cout<<c;
    }
    return 0;
}
