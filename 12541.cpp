#include <bits/stdc++.h>

using namespace std;
struct birth{
    char name[50];
    int day, month, year;
    int dd;
}person[150],temp;

int main()
{
    int tc;
    char c;
    scanf("%d%c",&tc,&c);
    for(int i = 0; i < tc; i++){
        scanf("%s%d%d%d",person[i].name,&person[i].day,&person[i].month,&person[i].year);
        person[i].dd = person[i].day + person[i].month * 30 + person[i].year * 12*30;
    }
//    cout<<endl;
//    for(int i = 0; i < tc; i++){
//        printf("%s %d\n",person[i].name,person[i].dd);
//    }
//    cout<<endl;
    for(int i = 0; i < tc; i++){
        for(int j = 0; j < tc - i; j++){
            if(person[j].dd < person[j+1].dd){
                swap(person[j].dd,person[j+1].dd);
                swap(person[j].name,person[j+1].name);
            }
        }
    }
//    for(int i = 0; i < tc; i++){
//        printf("s%s %d\n",person[i].name,person[i].dd);
//    }
    printf("%s\n",person[0].name);
    printf("%s\n",person[tc-1].name);
    return 0;
}

