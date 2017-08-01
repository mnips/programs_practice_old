#include <iostream>
using namespace std;
// pairs which give odd no. on XOR
int main()
{
    int t,flag=0;cin>>t;
    while(flag<t)
    {int i=0; long long int n,arr[100];
    cin>>n;
    for(i=0;i<n;i++)
    {cin>>arr[i];}
    int check=0;
      for(i=0;i<n;i++)
       for(int j=i+1;j<n;j++)
         {  if((arr[i]^arr[j])%2!=0)
              check++;
         }

    cout<<check<<endl;

    	flag++;
    }
    return 0;
}

