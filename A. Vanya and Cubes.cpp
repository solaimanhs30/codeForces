#include<bits/stdc++.h>
using namespace std;
 
int main()
 
{
    int num;
    cin>>num;
    int temp,sum=0,i;
    for( i=1;sum<=num;i++)
    {
        temp=(i*(i+1))/2;
        sum+=temp;
    }
 
    cout<<i-2<<endl;
 
    return 0;
}
