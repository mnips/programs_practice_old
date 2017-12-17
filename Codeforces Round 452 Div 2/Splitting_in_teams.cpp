#include <iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int n,val,count1=0,count2=0,ans=0;
    cin>>n;
    while(n--)
    {
        cin>>val;
        if(val==1)
        count1++;
        else if(val==2)
        count2++;
    }
    if(count1>count2)
    {
        ans=ans+count2;
        //if(count1-count2>=3)
        ans=ans+(count1-count2)/3;
    }
    else
    {
        ans=count1;
    }
    cout<<ans<<endl;
    return 0;
}
