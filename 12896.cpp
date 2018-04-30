#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc,bt;
    int button[200],press[200];
    char message[200];
    char mes[15][10] = {"0 ","0.,?\"","0abc","0def","0ghi","0jkl","0mno","0pqrs","0tuv","0wxyz"};
    scanf("%d",&tc);
    for(int i = 0; i < tc; i++){
        scanf("%d",&bt);
        for(int j = 0; j < bt; j++){
            scanf("%d",&button[j]);
        }
        for(int j = 0; j < bt; j++){
            scanf("%d",&press[j]);
        }
        memset(message, 0, sizeof message);
        for(int j = 0; j < bt; j++){
            message[j] = mes[button[j]][press[j]];
        }
        message[bt] = '\0';
        puts(message);
    }
    return 0;
}
