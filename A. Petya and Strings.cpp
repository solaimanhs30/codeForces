#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    string s1,s2;
 
    cin>>s1>>s2;
 
    int x=0;
    for(int i=0;s1[i]!='\0';i++)
    {
        s1[i]=tolower(s1[i]);
        s2[i]=tolower(s2[i]);
        if(s1[i]<s2[i]){
                x=-1;
            break;
        }
        else  if(s1[i]>s2[i]){
            x=1;
            break;
        }
    }
    if(x==-1)
        cout<<"-1"<<endl;
    else if(x==1)
        cout<<"1"<<endl;
        else cout<<"0"<<endl;
 
        return 0;
}
