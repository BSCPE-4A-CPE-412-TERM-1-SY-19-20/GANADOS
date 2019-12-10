//id number 479308

#include<iostream>
using namespace std;

int main()
{
    int j=0, state=0;
    int table [7][2] = { {0,1},{1,2},{2,3},{3,4},{4,5},{5,6},{6,6}};
    int input;
    int flag=0;
    char st[100];
    cin>>st;
    while(st[j] !='\0')
    {
        switch(st[j])
        {
            case 'a' : input=0;break;
            case 'b' : input=1;break;
        }
        state = table [state][input];
        if (state==0) {flag=1;}
        if (state==1) {flag=1;}
        if (state==2) {flag=1;}
        if (state==3) {flag=1;}
        if (state==4) {flag=1;}
        if (state==5) {flag=1;}
        if (state==6) {flag=0;break;}
    
        
        
        j++;
    
    }
    
    if (flag == 0) {cout<<"not  accepted";}
    else {cout<<" accepted";}
    return 0;
}
