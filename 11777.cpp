#include <iostream>
#include <cstdio>

using namespace std;
int main()
{
    int Term1,Term2,Final,Attendance,Class_Test1,Class_Test2,Class_Test3,T,i,avg;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        scanf("%d%d%d%d%d%d%d",&Term1,&Term2,&Final,&Attendance,&Class_Test1,&Class_Test2,&Class_Test3);
        if(Class_Test1<=Class_Test2 && Class_Test1<=Class_Test3){
            avg = (Class_Test2+Class_Test3)/2;
        }
        else if(Class_Test2<=Class_Test1 && Class_Test2<=Class_Test3){
            avg = (Class_Test1+Class_Test3)/2;
        }
        else {
            avg = (Class_Test1+Class_Test2)/2;
        }
        //printf("Test1 %d,Test2 %d\n",Class_Test1,Class_Test2);
        int total = Term1+Term2+Final+Attendance+avg;
        //printf("Total %d\n",total);
        if(total>=90){
            printf("Case %d: A\n",i);
        }
        else if(total>=80){
            printf("Case %d: B\n",i);
        }
        else if(total>=70){
            printf("Case %d: C\n",i);
        }
        else if(total>=60){
            printf("Case %d: D\n",i);
        }
        else if(total<60){
            printf("Case %d: F\n",i);
        }

    }
    return 0;
}
