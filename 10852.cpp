#include<iostream>
#include<cmath>

using namespace std;
int main()
{
    int n,x,i,check,test_case;
    cin>>test_case;
    while(test_case--)
    {
        cin>>n;
        for(i=2;i<=n;i++)
        {
            check=1;
            for(int j=2;j<=sqrt(i);j++)
            {
                if(i%j==0)
                {
                    check=0;
                     break;
                }
            }
            if(check==1)
            {
               if(i<=n&&(i*2)>n)
               {
                  cout<<i<<endl;
                  break;
               }
            }
        }
    }
 return 0;
}
