#include<bits/stdc++.h>
using namespace std;

#define size 501
int ar[size];

void triangularNum()
{
    int i,sum=0;
    for(int i=0;sum<501;i++){
        sum=sum+i;
        ar[sum]=1;
    }
}


int main()
{
    triangularNum();
    int num;
    cin>>num;

    if(ar[num]==1)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}
