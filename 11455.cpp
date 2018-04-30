#include <iostream>

using namespace std;
int main()
{
    int side1,side2,side3,side4;
    int i,T;
    cin>>T;
    for(i=1;i<=T;i++){
        cin>>side1>>side2>>side3>>side4;
        if(side1==side2&&side2==side3&&side3==side4&&side4==side1){
            cout<<"square"<<endl;
        }
        else if(side1==side3 && side2==side4 || side1==side2 && side3==side4 || side1==side4 &&side3==side2){
            cout<<"rectangle"<<endl;
        }
        else if((side1<=side2+side3+side4)&& (side2<=side1+side3+side4)&& (side3<=side1+side2+side4)&& (side4<=side1+side2+side3)){
            cout<<"quadrangle"<<endl;
        }
        else{
            cout<<"banana"<<endl;
        }
    }

    return 0;
}
