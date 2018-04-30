#include <iostream>
#include <cstring>

using namespace std;
int main()
{
    //char sen[100000];
    string sen;
    int i,t,j,flag;
    cin>>t;
    char ch=getchar();
    //cout<<ch<<endl;
    //printf("\n");
    for(i=1;i<=t;i++){
        getline(cin,sen);
        flag = 0;
        //int len = strlen(sen);
        int len = sen.size();
        //printf("len %d\n",len);
        for(j=0;j<len;j++){
            if(sen[j]=='a'){
                flag += 1;
            }
            else if(sen[j]=='b'){
                flag += 2;
            }
            else if(sen[j]=='c'){
                flag += 3;
            }
            else if(sen[j]=='d'){
                flag += 1;
            }
            else if(sen[j]=='e'){
                flag += 2;
            }
            else if(sen[j]=='f'){
                flag += 3;
            }
            else if(sen[j]=='g'){
                flag += 1;
            }
            else if(sen[j]=='h'){
                flag += 2;
            }
            else if(sen[j]=='i'){
                flag += 3;
            }
            else if(sen[j]=='j'){
                flag += 1;
            }
            else if(sen[j]=='k'){
                flag += 2;
            }
            else if(sen[j]=='l'){
                flag += 3;
            }
            else if(sen[j]=='m'){
                flag += 1;
            }
            else if(sen[j]=='n'){
                flag += 2;
            }
            else if(sen[j]=='o'){
                flag += 3;
            }
            else if(sen[j]=='p'){
                flag += 1;
            }
            else if(sen[j]=='q'){
                flag += 2;
            }
            else if(sen[j]=='r'){
                flag += 3;
            }
            else if(sen[j]=='s'){
                flag += 4;
            }
            else if(sen[j]=='t'){
                flag += 1;
            }
            else if(sen[j]=='u'){
                flag += 2;
            }
            else if(sen[j]=='v'){
                flag += 3;
            }
            else if(sen[j]=='w'){
                flag += 1;
            }
            else if(sen[j]=='x'){
                flag += 2;
            }
            else if(sen[j]=='y'){
                flag += 3;
            }
            else if(sen[j]=='z'){
                flag += 4;
            }
            else if(sen[j]==' '){
                flag += 1;
            }
        }
        cout<<"Case #"<<i<<": "<<flag<<endl;
        //printf("Case #%d: %d\n",i,flag);
    }
    return 0;
}
