#include <bits/stdc++.h>
using namespace std;

int main(){
    double x1,x2,x3,x4,y1,y2,y3,y4;
    double det = (x1-x2)*(y3-y4)-(y1-y2)*(x3-x4);
    double px = ((x1*y2 - y1*x2)(x3-x4)-(x1-x2)(x3*y4 - y3*x4))/det;
    double py = ((x1*y2 - y1*x2)(y3-y4)-(y1-y2)(x3*y4 - y3*x4))/det;
    int t;
    cin>>t;
    for(int i = 0; i < t; i++){
        cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
        double det = (x1-x2)*(y3-y4)-(y1-y2)*(x3-x4);
        double px = ((x1*y2 - y1*x2)(x3-x4)-(x1-x2)(x3*y4 - y3*x4))/det;
        double py = ((x1*y2 - y1*x2)(y3-y4)-(y1-y2)(x3*y4 - y3*x4))/det;
        cout<<"INTERSECTING LINES OUTPUT"<<endl;
        if(det == 0) cout<<"LINE";
        else if( det != 0){

        }
    }

    return 0;
}


