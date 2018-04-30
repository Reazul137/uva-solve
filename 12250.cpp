#include <iostream>
#include <cstring>

using namespace std;
int main()
{
    char lan[100000];
    int flag = 0;
    while(cin>>lan){
        flag++;
        if(strcmp(lan,"#")==0) break;
        else if(strcmp(lan,"HELLO")==0){
            cout<<"Case "<<flag<<": ENGLISH"<<endl;
        }
        else if(strcmp(lan,"HOLA")==0){
            cout<<"Case "<<flag<<": SPANISH\n";
        }
        else if(strcmp(lan,"HALLO")==0){
            cout<<"Case "<<flag<<": GERMAN\n";
        }
        else if(strcmp(lan,"BONJOUR")==0){
            cout<<"Case "<<flag<<": FRENCH\n";
        }
        else if(strcmp(lan,"CIAO")==0){
            cout<<"Case "<<flag<<": ITALIAN\n";
        }
        else if(strcmp(lan,"ZDRAVSTVUJTE")==0){
            cout<<"Case "<<flag<<": RUSSIAN\n";
        }
        else{
            cout<<"Case "<<flag<<": UNKNOWN\n";
        }

    }
    return 0;
}

