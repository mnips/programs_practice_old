#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n,q,i;
    cin>>n>>q;int arr[n],arr1[2*q];
    for(i=0;i<n;i++)cin>>arr[i];i=0;int sum[q];
    sort(arr,arr+n);int j=0,k=0;
    while(i<2*q)
    {  cin>>arr1[i];
       i++;
    }for(i=0;i<2*q;i++)
      {do
        {
            for(j=arr1[i]-1;j<=arr1[i+1]-1;j++)
                for(k=0;k<q;k++)
                sum[k]=arr[j];
        } while(next_permutation(arr,arr+n));
      }
   sort(sum,sum+q) ;
   cout<<sum[q-1];
    return 0;
}
