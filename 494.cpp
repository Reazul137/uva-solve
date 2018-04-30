#include <iostream>
#include <cstdio>
#include <string>

using namespace std;
int main()
{
    string line;
    while(getline(cin,line)){
        int word = 0;
        for(int i=0;i<line.length();i++){
            /*if(isalpha(line[i]) && !isalpha(line[i+1])){
                word++;
            }*/
            if(((line[i]>='a'&& line[i]<='z')||(line[i]>='A' && line[i]<='Z'))
            &&(line[i+1]<'a' || line[i+1]>'z')&&(line[i+1]<'A' || line[i+1]>'Z')){
                word++;
            }
        }
        cout<<word<<endl;
    }

    return 0;
}
