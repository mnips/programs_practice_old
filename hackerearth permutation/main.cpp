#include <iostream>
#include<algorithm>
using namespace std;

int main()
{int t,i=0;
cin>>t;
while(i<t)
{long long int n,j,k,flag=0;
cin>>n;
long long int arr[n];
for(j=0;j<n;j++)
{
	cin>>arr[j];
}
  for(k=0;k<n;k++)
   { if(arr[k]==k+1)
     flag++;
   }
   if(flag==n)
   {
   	for(j=0;j<n;j++)
   	 cout<<arr[j]<<" ";goto ok;
   }

   while(prev_permutation(arr,arr+n))
   { for(j=0;j<n;j++)
      cout<<arr[j]<<" ";goto yes;

   }
   ok:
   yes:
	cout<<endl;
	i++;
}
}
