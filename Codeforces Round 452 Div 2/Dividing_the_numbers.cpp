#include <iostream>
using namespace std;

int main()
{
    int n,i;
    cin>>n;
    
    if(n%2!=0)
    { if(n%4==3)
      cout<<0<<endl;
      else
      cout<<1<<endl;
      cout<<n/2+1<<" ";
        for(i=0;i<n;i++)
        {
         if(i==n-1)
         {cout<<i+1<<endl;
         break;
         }
         cout<<i+1<<" ";
         i++;
         cout<<i+1<<" ";
         
         i=i+2;
        }
    }
    else
    {
        if(n%4==0)
        {
            cout<<0<<endl;
            cout<<n/2<<" ";
            int x=n/4;
            for(i=0;i<x;i++)
            {
                cout<<i+1<<" "<<n-i<<" ";
            }
        }
        else
        {
            cout<<1<<endl;
            cout<<n/2<<" ";
            int x=n/4;
            for(i=0;i<x;i++)
            {
                cout<<i+1<<" "<<n-i<<" ";
            }
            cout<<n/2<<endl;
        }
        
    }
    return 0;
}
