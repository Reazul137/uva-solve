#include <iostream>
#include <cstring>

using namespace std;
int main()
{
    int i;
    string str;
    while(getline(cin, str, '\n')){
        for(i=0;i<str.size();i++)
        {
            if(str[i] == 'e' || str[i] == 'E'){
                cout<<"q";
            }
            else if(str[i] == 'r' || str[i] == 'R'){
                cout<<"w";
            }
            else if(str[i] == 't' || str[i] == 'T'){
                cout<<"e";
            }
            else if(str[i] == 'y' || str[i] == 'Y'){
                cout<<"r";
            }
            else if(str[i] == 'u' || str[i] == 'U'){
                cout<<"t";
            }
            else if(str[i] == 'i' || str[i] == 'I'){
                cout<<"y";
            }
            else if(str[i] == 'o' || str[i] == 'O'){
                cout<<"u";
            }
            else if(str[i] == 'p' || str[i] == 'P'){
                cout<<"i";
            }
            else if(str[i] == '[' || str[i] == '{'){
                cout<<"o";
            }
            else if(str[i] == ']' || str[i] == '}'){
                cout<<"p";
            }
            else if(str[i] == 'd' || str[i] == 'D'){
                cout<<"a";
            }
            else if(str[i] == 'f' || str[i] == 'F'){
                cout<<"s";
            }
            else if(str[i] == 'g' || str[i] == 'G'){
                cout<<"d";
            }
            else if(str[i] == 'h' || str[i] == 'H'){
                cout<<"f";
            }
            else if(str[i] == 'j' || str[i] == 'J'){
                cout<<"g";
            }
            else if(str[i] == 'k' || str[i] == 'K'){
                cout<<"h";
            }
            else if(str[i] == 'l' || str[i] == 'L'){
                cout<<"j";
            }
            else if(str[i] == ';' || str[i] == ':'){
                cout<<"k";
            }
            else if(str[i] == '"'){
                cout<<"l";
            }
            else if(str[i] == 'c' || str[i] == 'C'){
                cout<<"z";
            }
            else if(str[i] == 'v' || str[i] == 'V'){
                cout<<"x";
            }
            else if(str[i] == 'b' || str[i] == 'B'){
                cout<<"c";
            }
            else if(str[i] == 'n' || str[i] == 'N'){
                cout<<"v";
            }
            else if(str[i] == 'm' || str[i] == 'M'){
                cout<<"b";
            }
            else if(str[i] == ',' || str[i] == '<'){
                cout<<"n";
            }
            else if(str[i] == '.' || str[i] == '>'){
                cout<<"m";
            }
            else if(str[i] == '/' || str[i] == '?'){
                cout<<",";
            }
            else if(str[i] == ' '){
                cout<<" ";
            }
            else if(str[i]=='=')
                cout<<"0";
            else if(str[i]=='-')
                cout<<"9";
            else if(str[i]=='0')
                cout<<"8";
            else if(str[i]=='9')
                cout<<"7";
            else if(str[i]=='8')
                cout<<"6";
            else if(str[i]=='7')
                cout<<"5";
            else if(str[i]=='6')
                cout<<"4";
            else if(str[i]=='5')
                cout<<"3";
            else if(str[i]=='4')
                cout<<"2";
            else if(str[i]=='3')
                cout<<"1";
            else if(str[i]=='2')
                cout<<"`";

        }
        cout<<endl;
    }
    return 0;
}
