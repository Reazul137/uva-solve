#include <iostream>

using namespace std;
int main()
{
    long long int b,s;
    int flag = 0;
    while(cin>>b>>s){
        if(b==0 && s==0){
            break;
        }
        flag++;
        if(s>=b || s==b) cout<<"Case "<<flag<<": :-|"<<endl;
        else if(s==1||b>s) cout<<"Case "<<flag<<": :-("<<endl;
        else if(b==1) cout<<"Case "<<flag<<": :-\\"<<endl;

    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std ;
int main ()
{
    long long int b ,s ,cas=1 ;

    while (cin>>b>>s && b||s)
    {
            b=b-1 ;
            s=s-1 ;
        if (b==0 ) cout<<"Case "<<cas<<": "<<":-\\"<<endl ;
        else if (s==b || s>b ) cout<<"Case "<<cas<<": "<<":-|"<<endl ;
        else if (s<b) cout<<"Case "<<cas<<": "<<":-("<<endl ;

        cas++ ;
    }

    return 0 ;
}
