#include <bits/stdc++.h>

using namespace std;

struct team
{
    int id;
    int sol[12];
    int pen[12];
    bool submit;
} a[ 110];

void reset()
{
    for(int i = 0; i < 110; i++){
        a[i].id = i;
        memset(a[i].sol, 0, sizeof( a[i].sol));
        memset(a[i].pen, 0, sizeof( a[i].pen));
        a[i].submit = false;
    }
}

void calcu()
{

}

int main()
{

    return 0;
}
