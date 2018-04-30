#include <iostream>

using namespace std;
int main()
{
    int cd,bd,cm,bm,cy,by,i,t;
    char a;
    while(cin>>t){
        for(i=1;i<=t;i++)
        {
            cin>>cd>>a>>cm>>a>>cy;
            cin>>bd>>a>>bm>>a>>by;
            int y;
            y = cy - by;
            if(cm<bm){
                y--;
            }
            else if(cm==bm){
                if(cd<bd){
                    y--;
                }
            }
            if(y<0){
                cout<<"Case #"<<i<<": Invalid birth date"<<endl;
            }
            else if(y>130){
                cout<<"Case #"<<i<<": Check birth date"<<endl;
            }
            else{
                cout<<"Case #"<<i<<": "<<y<<endl;
            }
        }
    }
    return 0;
}
