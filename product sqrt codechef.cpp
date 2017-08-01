#include<iostream>
#include<math.h>
using namespace std;
typedef long long int ll;
 
void PS(ll *set, ll set_size)
{  ll count=0;
    /*set_size of power set of a set with set_size
      n is (2**n -1)*/
    ll pow_set_size = pow(2, set_size);
    ll counter, j;
    ll p=1;
    /*Run from counter 000..0 to 111..1*/
    for(counter = 0; counter < pow_set_size; counter++)
    {p=1;
      for(j = 0; j < set_size; j++)
       {
          /* Check if jth bit in the counter is set
             If set then pront jth element from set */
          if(counter & (1<<j))
            {//cout<<set[j]<<" ";
            p=p*set[j];
            
            }
            
            
       }
       //cout<<endl;
       //cout<<"p="<<p<<endl;
       ll a=sqrt(p);
       double b=sqrt(p);
       if(a==b)count++;
       //cout<<endl;
    }
    cout<<count-1<<endl;
}
 
int main()
{int t;
cin>>t;
while(t--)
{ll n,i;
cin>>n;
ll arr[n];
for(i=0;i<n;i++)cin>>arr[i];
PS(arr,n);

}
}
