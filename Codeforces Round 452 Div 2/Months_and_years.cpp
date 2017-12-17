#include <iostream>
using namespace std;

int main()
{
    int month[]={31,28,31,30,31,30,31,31,30,31,30,31};
    int i,j,n,flag=1,k,repeat=0,tr=0;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]==29)
        repeat++;
    }
    if(repeat==2)
    {cout<<"NO"<<endl;
    goto here;
    }
    i=0;j=0;k=1;
    tr=0;
    while(j<n)
    {   
        if(i==11)
        k=0;
        else if(i==12)
                i=0;
        if(j<n-1 && arr[i]==30 && arr[k]==30)
        {
            cout<<"NO"<<endl;
            goto here;
        }
        
        if(arr[j]==month[i] || (arr[j]==29 && i==1))
        {
            i++;
            j++;
            
        }
        else
        {
            i++;
            j=0;
        }
        tr++;
        if(tr>=288)
        {
            cout<<"NO";
            goto here;
        }
    }
    cout<<"YES"<<endl;
    here:
    ;
    return 0;
}
