#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t;cin>>t;
    int i=0;
    while(i<t)
    { int n;
      cin>>n;
      int j=0;
      int arr[n];
     for(j=0;j<n;j++)
        {cin>>arr[j];}
     sort(arr,arr+n);
     int sum=0;
     for(j=1;j<n;j++)
        sum+=arr[j];

     cout<<sum<<" ";//4580710790755226131//68641443035
      i++;
    }
    return 0;
}
