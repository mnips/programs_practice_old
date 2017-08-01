#include<iostream>
#include<math.h>
using namespace std;
typedef long long int ll;

void PS(ll *set, ll set_size,ll c)
{  //int count=0;
    /*set_size of power set of a set with set_size
      n is (2**n -1)*/
    ll pow_set_size = pow(2, set_size);
    ll counter, j;
    ll sum=0;
    ll arr[10000]={0},m[10000]={0};
    ll i,k=0,f=0,max=0,num;
    /*Run from counter 000..0 to 111..1*/
    for(counter = 0; counter < pow_set_size; counter++)
    {sum=0;k=0;
      for(j = 0; j < set_size; j++)
       {
          /* Check if jth bit in the counter is set
             If set then pront jth element from set */
          if(counter & (1<<j))
            {//cout<<set[j]<<" ";
            sum=sum+set[j];
            arr[k]=j+1;
            k++;
            }
            
            
       }
       //cout<<endl;
       if(max<sum&&sum%c==0)
	   {max=sum;f=1;
	   for(i=0;i<k;i++)m[i]=arr[i];
	   num=k;
	   }
      
       //cout<<endl;
   	 }
   	 if(f==1)
   	 { for(i=0;i<num;i++)cout<<m[i]<<" ";
   	 }
   else cout<<"no sweets";
  cout<<endl;

}
 
int main()
{while(true)
{ll i,n,c;
cin>>c>>n;
if(c==0&&n==0)break;
ll arr[n];
for(i=0;i<n;i++)
{cin>>arr[i];
}
PS(arr,n,c);
}
return 0;
}
